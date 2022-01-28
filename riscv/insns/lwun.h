require_rv64;
WRITE_RD(MMU.labeled_load_uint32(RS1 + insn.shamt()*4, insn.label()));
