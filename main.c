#include <mruby.h>
#include <mruby/irep.h>
#include "ruby_start.c"

int
main(void)
{
  mrb_state *mrb = mrb_open();
  if (!mrb) { /* handle error */ }
  mrb_load_irep(mrb, ruby_start);
  mrb_close(mrb);
  return 0;
}
