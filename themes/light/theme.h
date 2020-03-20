/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#191919", /* black   */
  [1] = "#993a20", /* red     */
  [2] = "#9fbc12", /* green   */
  [3] = "#fb7e14", /* yellow  */
  [4] = "#003b6e", /* blue    */
  [5] = "#67247e", /* magenta */
  [6] = "#36b4ac", /* cyan    */
  [7] = "#f5f5f5", /* white   */

  /* 8 bright colors */
  [8]  = "#282828", /* black   */
  [9]  = "#f45720", /* red     */
  [10] = "#daf658", /* green   */
  [11] = "#ffb935", /* yellow  */
  [12] = "#1e649f", /* blue    */
  [13] = "#c456e5", /* magenta */
  [14] = "#7aefde", /* cyan    */
  [15] = "#f5f5f5", /* white   */

  /* special colors */
  [256] = "#f5f5f5", /* background */
  [257] = "#191919", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg  = 257;
unsigned int defaultbg  = 256;
unsigned int defaultcs  = 257;
unsigned int defaultrcs = 256;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
unsigned int defaultitalic = 7;
unsigned int defaultunderline = 7;
