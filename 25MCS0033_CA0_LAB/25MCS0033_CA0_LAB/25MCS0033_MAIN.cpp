//#include "stdio.h"
#include "helloworld_srl.h"
//#include "helloworld_prl.h"
//#include "ret_et_helloworld.h"
//#include "ret_tid_helloworld.h"
#include "ret_practice.h"
#include "mnudrvprg_010_parallel_construct.h"
#include "mnudrvprg_020_runtime_environment_routines.h"
#include "run_time_environment_routines.h"
#include "030_ws_for_pp1.h"
#include "031_wsc_for_num_square.h"

int main()
{
    //fn_helloworld_prl();
    //fn_rer_practice_prl();
    /*fn_ret_et_helloworld_prl();
    fn_ret_et_helloworld_srl();
    fn_helloworld_srl();*/
    /*fn_helloworld_srl();
    fn_ret_tid_helloworld_srl();
    fn_ret_tid_helloworld_prl();f
    fn_rer_practice1_srl();
    fn_rer_practice3_speed_ef();*/
    //printf("Hello World");
    //fn_mnudrvprg_010_parallel_construct();
    fn_mnudrvprg_020_parallel_construct();
    //fn_ret_practice_srl();
  /*  fn_ret_practice_prl();*/

    ////1. Set number of threads
    //fn_rter_omp_set_num_threads(4);

    ////// 2. Get number of threads
    //fn_rter_omp_get_num_threads();

    ////// 3. Get max threads
    //fn_rter_omp_get_max_threads();

    ////// 4. Get thread num
    //fn_rter_omp_get_thread_num();

    ////// 5. Get num procs
    //fn_rter_omp_get_num_procs();

    ////// 6. In parallel
    //fn_rter_omp_in_parallel();

    ////// 7. Set dynamic
    //fn_rter_omp_set_dynamic(1);

    ////// 8. Get dynamic
    //fn_rter_omp_get_dynamic();

    ////// 9. Get cancellation
    //fn_rter_omp_get_cancellation();

    ////// 10. Set nested
    //fn_rter_omp_set_nested(1);

    ////// 11. Get nested
    //fn_rter_omp_get_nested();

    ////// 12. Set schedule
    //fn_rter_omp_set_schedule(4);

    ////// 13. Get schedule
    //fn_rter_omp_get_schedule();

    ////// 14. Get thread limit
    //fn_rter_omp_get_thread_limit();

    ////// 15. Set max active levels
    //fn_rter_omp_set_max_active_levels(2);

    ////// 16. Get max active levels
    //fn_rter_omp_get_max_active_levels();

    ////// 17. Get level
    //fn_rter_omp_get_level();

    ////// 18. Get ancestor thread num
    //fn_rter_omp_get_ancestor_thread_num(0);

    ////// 19. Get team size
    //fn_rter_omp_get_team_size(0);

    ////// 20. Get active level
    //fn_rter_omp_get_active_level();

    ////// 21. In final
    //fn_rter_omp_in_final();

    ////// 22. Get proc bind
    //fn_rter_omp_get_proc_bind();

    ////// 23. Set default device
    //fn_rter_omp_set_default_device(0);

    ////// 24. Get default device
    //fn_rter_omp_get_default_device();

    ////// 25. Get num devices
    //fn_rter_omp_get_num_devices();

    ////// 26. Get num teams
    //fn_rter_omp_get_num_teams();

    ////// 27. Get team num
    //fn_rter_omp_get_team_num();

    //fn_wsc_for_2constructs();
    //fn_wsc_for_1construct();
    //fn_num_squa.0re();
    return 0;
}