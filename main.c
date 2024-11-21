#include <stdio.h>
#include <ruby.h>

int main(int argc, char *argv[])
{
    ruby_init();

    printf("Hello C!\n");
    rb_eval_string("puts 'Hello Ruby!'");

    return ruby_cleanup(0);
}
