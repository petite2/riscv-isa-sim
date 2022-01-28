require_rv64;
WRITE_RD(MMU.labeled_load_int64(RS1 + insn.shamt()*8, insn.label()));
