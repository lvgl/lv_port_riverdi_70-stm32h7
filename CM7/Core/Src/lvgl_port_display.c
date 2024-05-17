/*********************
 *      INCLUDES
 *********************/

#include "lvgl_port_display.h"
#include "main.h"
#include "ltdc.h"
#include "dma2d.h"

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void disp_flush (lv_display_t *, const lv_area_t *, uint8_t *);
static void disp_flush_complete (DMA2D_HandleTypeDef*);

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_display_t * disp;
static __attribute__((aligned(32))) uint8_t buf_1[MY_DISP_HOR_RES * 64 * 2];

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void lvgl_display_init (void)
{
	/* display initialization */

	disp = lv_display_create(MY_DISP_HOR_RES, MY_DISP_VER_RES);
	lv_display_set_buffers(disp, buf_1, NULL, sizeof(buf_1), LV_DISPLAY_RENDER_MODE_PARTIAL);
	lv_display_set_flush_cb(disp, disp_flush);

	/* interrupt callback for DMA2D transfer */
	hdma2d.XferCpltCallback = disp_flush_complete;

}

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void
disp_flush (lv_display_t * display,
            const lv_area_t * area,
            uint8_t * px_map)
{
  lv_coord_t width = lv_area_get_width(area);
  lv_coord_t height = lv_area_get_height(area);

  SCB_CleanInvalidateDCache();

  DMA2D->CR = 0x0U << DMA2D_CR_MODE_Pos;
  DMA2D->FGPFCCR = DMA2D_INPUT_ARGB8888;
  DMA2D->FGMAR = (uint32_t)px_map;
  DMA2D->FGOR = 0;
  DMA2D->OPFCCR = DMA2D_OUTPUT_ARGB8888;
  DMA2D->OMAR = hltdc.LayerCfg[0].FBStartAdress + 4 * \
                (area->y1 * MY_DISP_HOR_RES + area->x1);
  DMA2D->OOR = MY_DISP_HOR_RES - width;
  DMA2D->NLR = (width << DMA2D_NLR_PL_Pos) | (height << DMA2D_NLR_NL_Pos);
  DMA2D->IFCR = 0x3FU;
  DMA2D->CR |= DMA2D_CR_TCIE;
  DMA2D->CR |= DMA2D_CR_START;
}

static void
disp_flush_complete (DMA2D_HandleTypeDef *hdma2d)
{
  lv_display_flush_ready(disp);
}

#if 0

/*********************
 *      INCLUDES
 *********************/

#include "lvgl_port_display.h"
#include "main.h"
#include "ltdc.h"
#include "dma2d.h"

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void disp_flush (lv_disp_drv_t*, const lv_area_t*, lv_color_t*);
static void disp_flush_complete (DMA2D_HandleTypeDef*);

/**********************
 *  STATIC VARIABLES
 **********************/

static lv_disp_drv_t disp_drv;
static lv_disp_draw_buf_t disp_buf;
static __attribute__((aligned(32))) lv_color_t buf_1[MY_DISP_HOR_RES * 64];

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void
lvgl_display_init (void)
{
  /* display initialization */
  ; /* display is already initialized by cubemx-generated code */

  /* display buffer initialization */
  lv_disp_draw_buf_init (&disp_buf,
                         (void*) buf_1,
                         NULL,
                         MY_DISP_HOR_RES * 64);

  /* register the display in LVGL */
  lv_disp_drv_init(&disp_drv);

  /* set the resolution of the display */
  disp_drv.hor_res = MY_DISP_HOR_RES;
  disp_drv.ver_res = MY_DISP_VER_RES;

  /* set callback for display driver */
  disp_drv.flush_cb = disp_flush;
  disp_drv.full_refresh = 0;

  /* interrupt callback for DMA2D transfer */
  hdma2d.XferCpltCallback = disp_flush_complete;

  /* set a display buffer */
  disp_drv.draw_buf = &disp_buf;

  /* finally register the driver */
  lv_disp_drv_register(&disp_drv);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

static void
disp_flush (lv_disp_drv_t   *drv,
            const lv_area_t *area,
            lv_color_t      *color_p)
{
  lv_coord_t width = lv_area_get_width(area);
  lv_coord_t height = lv_area_get_height(area);

  DMA2D->CR = 0x0U << DMA2D_CR_MODE_Pos;
  DMA2D->FGPFCCR = DMA2D_INPUT_ARGB8888;
  DMA2D->FGMAR = (uint32_t)color_p;
  DMA2D->FGOR = 0;
  DMA2D->OPFCCR = DMA2D_OUTPUT_ARGB8888;
  DMA2D->OMAR = hltdc.LayerCfg[0].FBStartAdress + 4 * \
                (area->y1 * MY_DISP_HOR_RES + area->x1);
  DMA2D->OOR = MY_DISP_HOR_RES - width;
  DMA2D->NLR = (width << DMA2D_NLR_PL_Pos) | (height << DMA2D_NLR_NL_Pos);
  DMA2D->IFCR = 0x3FU;
  DMA2D->CR |= DMA2D_CR_TCIE;
  DMA2D->CR |= DMA2D_CR_START;
}

static void
disp_flush_complete (DMA2D_HandleTypeDef *hdma2d)
{
  lv_disp_flush_ready(&disp_drv);
}

#endif
