#include <stc_macros.h>
#include <sct_database_profile.h>
#include <sct_accounting_profile.h>

static int run(sct_manager *mgr, int argc, char[] *argv)
{

    sct_int rc;

    sct_str *s = sct_new_str(mgr, "Hello");
    SCT_CHK_NULL(s)

    sct_str *t = sct_new_str(mgr, ", world!");
    SCT_CHK_NULL(t)

    sct_str *u = sct_cat_str(mgr, s, t);
    SCT_CHK_NULL(u)

    rc = sct_print(mgr, u);
    SCT_CHK_RC(rc)

    return 0;

}

int main(int argc, char[] *argv)
{

    sct_int rc;
    sct_int rc2;

    sct_manager *mgr = sct_alloc_manager();
    if (NULL == mgr){
        return 1;
    }

    rc2 = run(mgr, argc, argv);

    rc = sct_free_manager(mgr);
    if (0 != rc){
        return 1;
    }

    if (0 != rc2){
        return 1;
    }

    return 0;

}
