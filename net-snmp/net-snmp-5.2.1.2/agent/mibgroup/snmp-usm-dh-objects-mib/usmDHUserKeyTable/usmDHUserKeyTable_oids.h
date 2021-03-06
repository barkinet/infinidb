/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-oids.m2c,v 1.10 2004/10/08 23:39:17 rstory Exp $
 *
 * $Id: usmDHUserKeyTable_oids.h,v 1.4 2004/10/16 00:35:35 rstory Exp $
 */
#ifndef USMDHUSERKEYTABLE_OIDS_H
#define USMDHUSERKEYTABLE_OIDS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     * column number definitions for table usmDHUserKeyTable 
     */
#define USMDHUSERKEYTABLE_OID              1,3,6,1,3,101,1,1,2
#define COLUMN_USMDHUSERAUTHKEYCHANGE		1
#define COLUMN_USMDHUSEROWNAUTHKEYCHANGE		2
#define COLUMN_USMDHUSERPRIVKEYCHANGE		3
#define COLUMN_USMDHUSEROWNPRIVKEYCHANGE		4

#define USMDHUSERKEYTABLE_MIN_COL		COLUMN_USMDHUSERAUTHKEYCHANGE
#define USMDHUSERKEYTABLE_MAX_COL		COLUMN_USMDHUSEROWNPRIVKEYCHANGE

    /*
     * change flags for writable columns
     */
#define FLAG_USMDHUSERAUTHKEYCHANGE       (0x1 << 0)
#define FLAG_USMDHUSEROWNAUTHKEYCHANGE       (0x1 << 1)
#define FLAG_USMDHUSERPRIVKEYCHANGE       (0x1 << 2)
#define FLAG_USMDHUSEROWNPRIVKEYCHANGE       (0x1 << 3)

#define FLAG_MAX_USMDHUSERKEYTABLE 4



#ifdef __cplusplus
}
#endif
#endif                          /* USMDHUSERKEYTABLE_OIDS_H */
