require_rv64;
MMU.labeled_store_uint64(RS1 + insn.s_shamt()*8, RS2, insn.label());
