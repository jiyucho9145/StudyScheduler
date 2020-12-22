#include <sct/include/sct_database_profile.h>
#include <sct/include/sct_accounting_profile.h>

int main(int argc, char[] *argv)
{
    sct_object_manager *mg = sct_alloc_object_manager();
    sct_database_profile *dp = sct_new_database_profile(mg);
    sct_free_object_manager(mg);
    return 0;
}
