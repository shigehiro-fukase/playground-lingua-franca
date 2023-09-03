#include <stdlib.h>
#include <netlogger.h>

int lf_reactor_c_main(int argc, const char *argv[]);

void slo_main()
{
    int argc = 0;
    const char *argv[] = {0};
#ifdef USE_NETLOGGER
    nl_init();
#endif
    lf_reactor_c_main(argc, argv);
    exit(0);
}
