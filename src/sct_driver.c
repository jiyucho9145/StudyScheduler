#include <stc_macros.h>
#include <sct_database_profile.h>
#include <sct_accounting_profile.h>

int main(int argc, char[] *argv)
{
    sct_manager *mg = sct_alloc_manager();
    sct_database_profile *dp = sct_new_database_profile(mg);
    sct_free_manager(mg);
    return 0;
}
