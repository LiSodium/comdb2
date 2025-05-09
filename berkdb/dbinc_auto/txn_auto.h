/* Do not edit: automatically built by gen_rec.awk. */

/* (updated for linux) */
#ifndef	__txn_AUTO_H
#define	__txn_AUTO_H
#define	DB___txn_regop	10
typedef struct ___txn_regop_args {
	u_int32_t type;
	DB_TXN *txnid;
	DB_LSN prev_lsn;
	u_int32_t	opcode;
	int32_t	timestamp;
	DBT	locks;
} __txn_regop_args;

#define	DB___txn_ckp	11
typedef struct ___txn_ckp_args {
	u_int32_t type;
	DB_TXN *txnid;
	DB_LSN prev_lsn;
	DB_LSN	ckp_lsn;
	DB_LSN	last_ckp;
	int32_t	timestamp;
	u_int32_t	rep_gen;
	u_int64_t	max_utxnid;
} __txn_ckp_args;

#define	DB___txn_child	12
typedef struct ___txn_child_args {
	u_int32_t type;
	DB_TXN *txnid;
	DB_LSN prev_lsn;
	u_int32_t	child;
	u_int64_t   child_utxnid;
	DB_LSN	c_lsn;
} __txn_child_args;

#define	DB___txn_xa_regop	13
typedef struct ___txn_xa_regop_args {
	u_int32_t type;
	DB_TXN *txnid;
	DB_LSN prev_lsn;
	u_int32_t	opcode;
	DBT	xid;
	int32_t	formatID;
	u_int32_t	gtrid;
	u_int32_t	bqual;
	DB_LSN	begin_lsn;
	DBT	locks;
} __txn_xa_regop_args;

#define	DB___txn_recycle	14
typedef struct ___txn_recycle_args {
	u_int32_t type;
	DB_TXN *txnid;
	DB_LSN prev_lsn;
	u_int32_t	min;
	u_int32_t	max;
} __txn_recycle_args;

#define	DB___txn_regop_rowlocks	15
typedef struct ___txn_regop_rowlocks_args {
	u_int32_t type;
	DB_TXN *txnid;
	DB_LSN prev_lsn;
	u_int32_t   opcode;
    u_int64_t   ltranid;
    DB_LSN begin_lsn;
    DB_LSN last_commit_lsn;
    u_int64_t   context;
	u_int64_t timestamp;
    u_int32_t lflags;
	u_int32_t generation;
	DBT	locks;
	DBT	rowlocks;
} __txn_regop_rowlocks_args;

#define	DB___txn_regop_gen	16
typedef struct ___txn_regop_gen_args {
	u_int32_t type;
	DB_TXN *txnid;
	DB_LSN prev_lsn;
	u_int32_t	opcode;
	u_int32_t	generation;
	u_int64_t	context;
	u_int64_t	timestamp;
	DBT	locks;
} __txn_regop_gen_args;

#define DB___txn_dist_prepare  17
typedef struct __txn_dist_prepare_args {
	u_int32_t type;
	DB_TXN *txnid;
	DB_LSN prev_lsn;
	u_int32_t generation;
	DB_LSN begin_lsn;
	DBT dist_txnid;
    u_int64_t genid;
	u_int32_t lflags;
	u_int32_t coordinator_gen;
	DBT coordinator_name;
	DBT coordinator_tier;
	DBT blkseq_key;
	DBT locks;
} __txn_dist_prepare_args;

#define DB___txn_dist_abort	18
typedef struct __txn_dist_abort_args {
	u_int32_t type;
	DB_TXN *txnid;
	DB_LSN prev_lsn;
	u_int32_t	generation;
	u_int64_t	timestamp;
	DBT dist_txnid;
} __txn_dist_abort_args;

#define DB___txn_dist_commit	19
typedef struct __txn_dist_commit_args {
	u_int32_t type;
	DB_TXN *txnid;
	DB_LSN prev_lsn;
	u_int32_t	generation;
	u_int64_t	context;
	u_int64_t	timestamp;
	DBT	dist_txnid;
} __txn_dist_commit_args;

#define DB___txn_ckp_recovery	20
typedef struct __txn_ckp_recovery_args {
	u_int32_t type;
	DB_TXN *txnid;
	DB_LSN prev_lsn;
	DB_LSN	ckp_lsn;
	DB_LSN	last_ckp;
	int32_t	timestamp;
	u_int32_t	rep_gen;
	u_int64_t	max_utxnid;
} __txn_ckp_recovery_args;

#define DB___txn_regop_rowlocks_endianize 150
#define DB___txn_regop_gen_endianize 151
#define DB___txn_dist_prepare_endianize 152

#endif
