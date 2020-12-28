#include <stc_macros.h>
#include <sct_database_profile.h>
#include <sct_accounting_profile.h>

int main(int argc, char[] *argv)
{

    sct_int rc;

    sct_manager *mgr = sct_alloc_manager();
    if (NULL == mgr){
        return 1;
    }

    sct_database_profile *dp = sct_new_database_profile(mg);
    SCT_CHK_NULL(dp)

    rc = sct_free_manager(mg);
    if (0 != rc){
        return 1;
    }

    return 0;

}
