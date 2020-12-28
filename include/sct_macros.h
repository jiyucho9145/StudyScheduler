/* Error code. */
#define SCT_ERR 1

/* Error message. */
#define SCT_MSG "error:%d:%s\n"

/* Returns an error code if a returned code of a called function is an error code. */
#define SCT_CHK_RC(rc) if(0!=(rc)){fprintf(stderr,SCT_MSG,__FILE__,__LINE__);return(SCT_ERR);}

/* Returns an error code if a returned pointer of a called function is the null pointer. */
#define SCT_CHK_NULL(p) if(NULL==(p)){fprintf(stderr,SCT_MSG,__FILE__,__LINE__);return(SCT_ERR);}

/* Returns the null pointer if a returned pointer of a called function is the null pointer. */
#define SCT_CHK_OBJ(p) if(NULL==(p)){fprintf(stderr,SCT_MSG,__FILE__,__LINE__);return(NULL);}
