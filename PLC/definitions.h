
/* needed by the text package */
#ifndef _text_cbits_h
#define _text_cbits_h
#define UTF8_ACCEPT 0
#define UTF8_REJECT 12
#endif

/* package base-4.5.0.0 */
#define VERSION_base "4.5.0.0"
#define MIN_VERSION_base(major1,major2,minor) (\
  (major1) <  4 || \
  (major1) == 4 && (major2) <  5 || \
  (major1) == 4 && (major2) == 5 && (minor) <= 0)

/* package bytestring-0.9.2.1 */
#define VERSION_bytestring "0.9.2.1"
#define MIN_VERSION_bytestring(major1,major2,minor) (\
  (major1) <  0 || \
  (major1) == 0 && (major2) <  9 || \
  (major1) == 0 && (major2) == 9 && (minor) <= 2)

/* package ghc-prim-0.2.0.0 */
#define VERSION_ghc_prim "0.2.0.0"
#define MIN_VERSION_ghc_prim(major1,major2,minor) (\
  (major1) <  0 || \
  (major1) == 0 && (major2) <  2 || \
  (major1) == 0 && (major2) == 2 && (minor) <= 0)

/* package integer-gmp-0.4.0.0 * /
#define VERSION_integer_gmp "0.4.0.0"
#define MIN_VERSION_integer_gmp(major1,major2,minor) (\
  (major1) <  0 || \
  (major1) == 0 && (major2) <  4 || \
  (major1) == 0 && (major2) == 4 && (minor) <= 0)
*/

/* package text-0.11.1.13 */
#define VERSION_text "0.11.1.13"
#define MIN_VERSION_text(major1,major2,minor) (\
  (major1) <  0 || \
  (major1) == 0 && (major2) <  11 || \
  (major1) == 0 && (major2) == 11 && (minor) <= 1)

/* tool alex-3.0.1 */
#define TOOL_VERSION_alex "3.0.1"
#define MIN_TOOL_VERSION_alex(major1,major2,minor) (\
  (major1) <  3 || \
  (major1) == 3 && (major2) <  0 || \
  (major1) == 3 && (major2) == 0 && (minor) <= 1)

/* tool gcc-4.6 */
#define TOOL_VERSION_gcc "4.6"
#define MIN_TOOL_VERSION_gcc(major1,major2,minor) (\
  (major1) <  4 || \
  (major1) == 4 && (major2) <  6 || \
  (major1) == 4 && (major2) == 6 && (minor) <= 0)

/* tool ghc-7.4.1 */
#define TOOL_VERSION_ghc "7.4.1"
#define MIN_TOOL_VERSION_ghc(major1,major2,minor) (\
  (major1) <  7 || \
  (major1) == 7 && (major2) <  4 || \
  (major1) == 7 && (major2) == 4 && (minor) <= 1)

/* tool ghc-pkg-7.4.1 */
#define TOOL_VERSION_ghc_pkg "7.4.1"
#define MIN_TOOL_VERSION_ghc_pkg(major1,major2,minor) (\
  (major1) <  7 || \
  (major1) == 7 && (major2) <  4 || \
  (major1) == 7 && (major2) == 4 && (minor) <= 1)

/* tool haddock-2.10.0 */
#define TOOL_VERSION_haddock "2.10.0"
#define MIN_TOOL_VERSION_haddock(major1,major2,minor) (\
  (major1) <  2 || \
  (major1) == 2 && (major2) <  10 || \
  (major1) == 2 && (major2) == 10 && (minor) <= 0)

/* tool happy-1.18.9 */
#define TOOL_VERSION_happy "1.18.9"
#define MIN_TOOL_VERSION_happy(major1,major2,minor) (\
  (major1) <  1 || \
  (major1) == 1 && (major2) <  18 || \
  (major1) == 1 && (major2) == 18 && (minor) <= 9)

/* tool hpc-0.6 */
#define TOOL_VERSION_hpc "0.6"
#define MIN_TOOL_VERSION_hpc(major1,major2,minor) (\
  (major1) <  0 || \
  (major1) == 0 && (major2) <  6 || \
  (major1) == 0 && (major2) == 6 && (minor) <= 0)

/* tool hsc2hs-0.67 */
#define TOOL_VERSION_hsc2hs "0.67"
#define MIN_TOOL_VERSION_hsc2hs(major1,major2,minor) (\
  (major1) <  0 || \
  (major1) == 0 && (major2) <  67 || \
  (major1) == 0 && (major2) == 67 && (minor) <= 0)

/* tool pkg-config-0.26 */
#define TOOL_VERSION_pkg_config "0.26"
#define MIN_TOOL_VERSION_pkg_config(major1,major2,minor) (\
  (major1) <  0 || \
  (major1) == 0 && (major2) <  26 || \
  (major1) == 0 && (major2) == 26 && (minor) <= 0)

/* tool strip-2.22 */
#define TOOL_VERSION_strip "2.22"
#define MIN_TOOL_VERSION_strip(major1,major2,minor) (\
  (major1) <  2 || \
  (major1) == 2 && (major2) <  22 || \
  (major1) == 2 && (major2) == 22 && (minor) <= 0)

