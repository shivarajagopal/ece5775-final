-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.2
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity voicerec is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    np : IN STD_LOGIC_VECTOR (31 downto 0);
    inSound_address0 : OUT STD_LOGIC_VECTOR (13 downto 0);
    inSound_ce0 : OUT STD_LOGIC;
    inSound_we0 : OUT STD_LOGIC;
    inSound_d0 : OUT STD_LOGIC_VECTOR (63 downto 0);
    inSound_q0 : IN STD_LOGIC_VECTOR (63 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of voicerec is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "voicerec,hls_ip_2015_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.952400,HLS_SYN_LAT=-1,HLS_SYN_TPT=none,HLS_SYN_MEM=121,HLS_SYN_DSP=114,HLS_SYN_FF=16673,HLS_SYN_LUT=25985}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_st1_fsm_0 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_ST_st2_fsm_1 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_ST_st3_fsm_2 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_ST_st4_fsm_3 : STD_LOGIC_VECTOR (4 downto 0) := "01000";
    constant ap_ST_st5_fsm_4 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_1F40 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000001111101000000";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_sig_cseq_ST_st1_fsm_0 : STD_LOGIC;
    signal ap_sig_bdd_21 : BOOLEAN;
    signal result_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal result_ce0 : STD_LOGIC;
    signal result_we0 : STD_LOGIC;
    signal result_d0 : STD_LOGIC_VECTOR (63 downto 0);
    signal result_q0 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_sig_cseq_ST_st2_fsm_1 : STD_LOGIC;
    signal ap_sig_bdd_55 : BOOLEAN;
    signal grp_voicerec_preprocessSound_fu_134_ap_done : STD_LOGIC;
    signal stride_fu_190_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal stride_reg_226 : STD_LOGIC_VECTOR (31 downto 0);
    signal index_1_fu_209_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal index_1_reg_234 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_sig_cseq_ST_st3_fsm_2 : STD_LOGIC;
    signal ap_sig_bdd_70 : BOOLEAN;
    signal i_1_fu_215_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal i_1_reg_239 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_s_fu_203_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal outSound_address0 : STD_LOGIC_VECTOR (12 downto 0);
    signal outSound_ce0 : STD_LOGIC;
    signal outSound_we0 : STD_LOGIC;
    signal outSound_d0 : STD_LOGIC_VECTOR (63 downto 0);
    signal outSound_q0 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_voicerec_processChunk_fu_92_ap_start : STD_LOGIC;
    signal grp_voicerec_processChunk_fu_92_ap_done : STD_LOGIC;
    signal grp_voicerec_processChunk_fu_92_ap_idle : STD_LOGIC;
    signal grp_voicerec_processChunk_fu_92_ap_ready : STD_LOGIC;
    signal grp_voicerec_processChunk_fu_92_sp : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_voicerec_processChunk_fu_92_np : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_voicerec_processChunk_fu_92_ret_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal grp_voicerec_processChunk_fu_92_ret_ce0 : STD_LOGIC;
    signal grp_voicerec_processChunk_fu_92_ret_we0 : STD_LOGIC;
    signal grp_voicerec_processChunk_fu_92_ret_d0 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_voicerec_processChunk_fu_92_tmp_122 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_voicerec_processChunk_fu_92_inputSound_address0 : STD_LOGIC_VECTOR (12 downto 0);
    signal grp_voicerec_processChunk_fu_92_inputSound_ce0 : STD_LOGIC;
    signal grp_voicerec_processChunk_fu_92_inputSound_q0 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_voicerec_classifySound_fu_118_ap_start : STD_LOGIC;
    signal grp_voicerec_classifySound_fu_118_ap_done : STD_LOGIC;
    signal grp_voicerec_classifySound_fu_118_ap_idle : STD_LOGIC;
    signal grp_voicerec_classifySound_fu_118_ap_ready : STD_LOGIC;
    signal grp_voicerec_classifySound_fu_118_result_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal grp_voicerec_classifySound_fu_118_result_ce0 : STD_LOGIC;
    signal grp_voicerec_classifySound_fu_118_result_q0 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_voicerec_classifySound_fu_118_ap_return : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_voicerec_preprocessSound_fu_134_ap_start : STD_LOGIC;
    signal grp_voicerec_preprocessSound_fu_134_ap_idle : STD_LOGIC;
    signal grp_voicerec_preprocessSound_fu_134_ap_ready : STD_LOGIC;
    signal grp_voicerec_preprocessSound_fu_134_inSound_address0 : STD_LOGIC_VECTOR (13 downto 0);
    signal grp_voicerec_preprocessSound_fu_134_inSound_ce0 : STD_LOGIC;
    signal grp_voicerec_preprocessSound_fu_134_inSound_we0 : STD_LOGIC;
    signal grp_voicerec_preprocessSound_fu_134_inSound_d0 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_voicerec_preprocessSound_fu_134_inSound_q0 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_voicerec_preprocessSound_fu_134_outSound_address0 : STD_LOGIC_VECTOR (12 downto 0);
    signal grp_voicerec_preprocessSound_fu_134_outSound_ce0 : STD_LOGIC;
    signal grp_voicerec_preprocessSound_fu_134_outSound_we0 : STD_LOGIC;
    signal grp_voicerec_preprocessSound_fu_134_outSound_d0 : STD_LOGIC_VECTOR (63 downto 0);
    signal i_reg_68 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_sig_cseq_ST_st4_fsm_3 : STD_LOGIC;
    signal ap_sig_bdd_136 : BOOLEAN;
    signal index_reg_80 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_voicerec_processChunk_fu_92_ap_start_ap_start_reg : STD_LOGIC := '0';
    signal grp_voicerec_classifySound_fu_118_ap_start_ap_start_reg : STD_LOGIC := '0';
    signal ap_sig_cseq_ST_st5_fsm_4 : STD_LOGIC;
    signal ap_sig_bdd_234 : BOOLEAN;
    signal grp_voicerec_preprocessSound_fu_134_ap_start_ap_start_reg : STD_LOGIC := '0';
    signal p_neg_fu_150_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal p_lshr_fu_156_p4 : STD_LOGIC_VECTOR (30 downto 0);
    signal tmp_1_fu_166_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal p_lshr_f_fu_176_p4 : STD_LOGIC_VECTOR (30 downto 0);
    signal tmp_3_fu_142_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_neg_t_fu_170_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_2_fu_186_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_fu_198_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (4 downto 0);

    component voicerec_processChunk IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        sp : IN STD_LOGIC_VECTOR (31 downto 0);
        np : IN STD_LOGIC_VECTOR (31 downto 0);
        ret_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
        ret_ce0 : OUT STD_LOGIC;
        ret_we0 : OUT STD_LOGIC;
        ret_d0 : OUT STD_LOGIC_VECTOR (63 downto 0);
        tmp_122 : IN STD_LOGIC_VECTOR (31 downto 0);
        inputSound_address0 : OUT STD_LOGIC_VECTOR (12 downto 0);
        inputSound_ce0 : OUT STD_LOGIC;
        inputSound_q0 : IN STD_LOGIC_VECTOR (63 downto 0) );
    end component;


    component voicerec_classifySound IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        result_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
        result_ce0 : OUT STD_LOGIC;
        result_q0 : IN STD_LOGIC_VECTOR (63 downto 0);
        ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component voicerec_preprocessSound IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        inSound_address0 : OUT STD_LOGIC_VECTOR (13 downto 0);
        inSound_ce0 : OUT STD_LOGIC;
        inSound_we0 : OUT STD_LOGIC;
        inSound_d0 : OUT STD_LOGIC_VECTOR (63 downto 0);
        inSound_q0 : IN STD_LOGIC_VECTOR (63 downto 0);
        outSound_address0 : OUT STD_LOGIC_VECTOR (12 downto 0);
        outSound_ce0 : OUT STD_LOGIC;
        outSound_we0 : OUT STD_LOGIC;
        outSound_d0 : OUT STD_LOGIC_VECTOR (63 downto 0) );
    end component;


    component voicerec_result IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (9 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (63 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (63 downto 0) );
    end component;


    component voicerec_outSound IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (12 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (63 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (63 downto 0) );
    end component;



begin
    result_U : component voicerec_result
    generic map (
        DataWidth => 64,
        AddressRange => 882,
        AddressWidth => 10)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => result_address0,
        ce0 => result_ce0,
        we0 => result_we0,
        d0 => result_d0,
        q0 => result_q0);

    outSound_U : component voicerec_outSound
    generic map (
        DataWidth => 64,
        AddressRange => 8000,
        AddressWidth => 13)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => outSound_address0,
        ce0 => outSound_ce0,
        we0 => outSound_we0,
        d0 => outSound_d0,
        q0 => outSound_q0);

    grp_voicerec_processChunk_fu_92 : component voicerec_processChunk
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_voicerec_processChunk_fu_92_ap_start,
        ap_done => grp_voicerec_processChunk_fu_92_ap_done,
        ap_idle => grp_voicerec_processChunk_fu_92_ap_idle,
        ap_ready => grp_voicerec_processChunk_fu_92_ap_ready,
        sp => grp_voicerec_processChunk_fu_92_sp,
        np => grp_voicerec_processChunk_fu_92_np,
        ret_address0 => grp_voicerec_processChunk_fu_92_ret_address0,
        ret_ce0 => grp_voicerec_processChunk_fu_92_ret_ce0,
        ret_we0 => grp_voicerec_processChunk_fu_92_ret_we0,
        ret_d0 => grp_voicerec_processChunk_fu_92_ret_d0,
        tmp_122 => grp_voicerec_processChunk_fu_92_tmp_122,
        inputSound_address0 => grp_voicerec_processChunk_fu_92_inputSound_address0,
        inputSound_ce0 => grp_voicerec_processChunk_fu_92_inputSound_ce0,
        inputSound_q0 => grp_voicerec_processChunk_fu_92_inputSound_q0);

    grp_voicerec_classifySound_fu_118 : component voicerec_classifySound
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_voicerec_classifySound_fu_118_ap_start,
        ap_done => grp_voicerec_classifySound_fu_118_ap_done,
        ap_idle => grp_voicerec_classifySound_fu_118_ap_idle,
        ap_ready => grp_voicerec_classifySound_fu_118_ap_ready,
        result_address0 => grp_voicerec_classifySound_fu_118_result_address0,
        result_ce0 => grp_voicerec_classifySound_fu_118_result_ce0,
        result_q0 => grp_voicerec_classifySound_fu_118_result_q0,
        ap_return => grp_voicerec_classifySound_fu_118_ap_return);

    grp_voicerec_preprocessSound_fu_134 : component voicerec_preprocessSound
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_voicerec_preprocessSound_fu_134_ap_start,
        ap_done => grp_voicerec_preprocessSound_fu_134_ap_done,
        ap_idle => grp_voicerec_preprocessSound_fu_134_ap_idle,
        ap_ready => grp_voicerec_preprocessSound_fu_134_ap_ready,
        inSound_address0 => grp_voicerec_preprocessSound_fu_134_inSound_address0,
        inSound_ce0 => grp_voicerec_preprocessSound_fu_134_inSound_ce0,
        inSound_we0 => grp_voicerec_preprocessSound_fu_134_inSound_we0,
        inSound_d0 => grp_voicerec_preprocessSound_fu_134_inSound_d0,
        inSound_q0 => grp_voicerec_preprocessSound_fu_134_inSound_q0,
        outSound_address0 => grp_voicerec_preprocessSound_fu_134_outSound_address0,
        outSound_ce0 => grp_voicerec_preprocessSound_fu_134_outSound_ce0,
        outSound_we0 => grp_voicerec_preprocessSound_fu_134_outSound_we0,
        outSound_d0 => grp_voicerec_preprocessSound_fu_134_outSound_d0);





    -- the current state (ap_CS_fsm) of the state machine. --
    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_st1_fsm_0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    -- grp_voicerec_classifySound_fu_118_ap_start_ap_start_reg assign process. --
    grp_voicerec_classifySound_fu_118_ap_start_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_voicerec_classifySound_fu_118_ap_start_ap_start_reg <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2) and (tmp_s_fu_203_p2 = ap_const_lv1_0))) then 
                    grp_voicerec_classifySound_fu_118_ap_start_ap_start_reg <= ap_const_logic_1;
                elsif ((ap_const_logic_1 = grp_voicerec_classifySound_fu_118_ap_ready)) then 
                    grp_voicerec_classifySound_fu_118_ap_start_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    -- grp_voicerec_preprocessSound_fu_134_ap_start_ap_start_reg assign process. --
    grp_voicerec_preprocessSound_fu_134_ap_start_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_voicerec_preprocessSound_fu_134_ap_start_ap_start_reg <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not((ap_start = ap_const_logic_0)))) then 
                    grp_voicerec_preprocessSound_fu_134_ap_start_ap_start_reg <= ap_const_logic_1;
                elsif ((ap_const_logic_1 = grp_voicerec_preprocessSound_fu_134_ap_ready)) then 
                    grp_voicerec_preprocessSound_fu_134_ap_start_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    -- grp_voicerec_processChunk_fu_92_ap_start_ap_start_reg assign process. --
    grp_voicerec_processChunk_fu_92_ap_start_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_voicerec_processChunk_fu_92_ap_start_ap_start_reg <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2) and not((tmp_s_fu_203_p2 = ap_const_lv1_0)))) then 
                    grp_voicerec_processChunk_fu_92_ap_start_ap_start_reg <= ap_const_logic_1;
                elsif ((ap_const_logic_1 = grp_voicerec_processChunk_fu_92_ap_ready)) then 
                    grp_voicerec_processChunk_fu_92_ap_start_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    -- i_reg_68 assign process. --
    i_reg_68_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3) and not((ap_const_logic_0 = grp_voicerec_processChunk_fu_92_ap_done)))) then 
                i_reg_68 <= i_1_reg_239;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not((ap_const_logic_0 = grp_voicerec_preprocessSound_fu_134_ap_done)))) then 
                i_reg_68 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;

    -- index_reg_80 assign process. --
    index_reg_80_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3) and not((ap_const_logic_0 = grp_voicerec_processChunk_fu_92_ap_done)))) then 
                index_reg_80 <= index_1_reg_234;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not((ap_const_logic_0 = grp_voicerec_preprocessSound_fu_134_ap_done)))) then 
                index_reg_80 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2) and not((tmp_s_fu_203_p2 = ap_const_lv1_0)))) then
                i_1_reg_239 <= i_1_fu_215_p2;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2)) then
                index_1_reg_234 <= index_1_fu_209_p2;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not((ap_const_logic_0 = grp_voicerec_preprocessSound_fu_134_ap_done)))) then
                stride_reg_226 <= stride_fu_190_p3;
            end if;
        end if;
    end process;

    -- the next state (ap_NS_fsm) of the state machine. --
    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, grp_voicerec_preprocessSound_fu_134_ap_done, tmp_s_fu_203_p2, grp_voicerec_processChunk_fu_92_ap_done, grp_voicerec_classifySound_fu_118_ap_done)
    begin
        case ap_CS_fsm is
            when ap_ST_st1_fsm_0 => 
                if (not((ap_start = ap_const_logic_0))) then
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                else
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                end if;
            when ap_ST_st2_fsm_1 => 
                if (not((ap_const_logic_0 = grp_voicerec_preprocessSound_fu_134_ap_done))) then
                    ap_NS_fsm <= ap_ST_st3_fsm_2;
                else
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                end if;
            when ap_ST_st3_fsm_2 => 
                if ((tmp_s_fu_203_p2 = ap_const_lv1_0)) then
                    ap_NS_fsm <= ap_ST_st5_fsm_4;
                else
                    ap_NS_fsm <= ap_ST_st4_fsm_3;
                end if;
            when ap_ST_st4_fsm_3 => 
                if (not((ap_const_logic_0 = grp_voicerec_processChunk_fu_92_ap_done))) then
                    ap_NS_fsm <= ap_ST_st3_fsm_2;
                else
                    ap_NS_fsm <= ap_ST_st4_fsm_3;
                end if;
            when ap_ST_st5_fsm_4 => 
                if (not((ap_const_logic_0 = grp_voicerec_classifySound_fu_118_ap_done))) then
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                else
                    ap_NS_fsm <= ap_ST_st5_fsm_4;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXXX";
        end case;
    end process;

    -- ap_done assign process. --
    ap_done_assign_proc : process(grp_voicerec_classifySound_fu_118_ap_done, ap_sig_cseq_ST_st5_fsm_4)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4) and not((ap_const_logic_0 = grp_voicerec_classifySound_fu_118_ap_done)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_idle assign process. --
    ap_idle_assign_proc : process(ap_start, ap_sig_cseq_ST_st1_fsm_0)
    begin
        if ((not((ap_const_logic_1 = ap_start)) and (ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_ready assign process. --
    ap_ready_assign_proc : process(grp_voicerec_classifySound_fu_118_ap_done, ap_sig_cseq_ST_st5_fsm_4)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4) and not((ap_const_logic_0 = grp_voicerec_classifySound_fu_118_ap_done)))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= grp_voicerec_classifySound_fu_118_ap_return;

    -- ap_sig_bdd_136 assign process. --
    ap_sig_bdd_136_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_136 <= (ap_const_lv1_1 = ap_CS_fsm(3 downto 3));
    end process;


    -- ap_sig_bdd_21 assign process. --
    ap_sig_bdd_21_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_21 <= (ap_CS_fsm(0 downto 0) = ap_const_lv1_1);
    end process;


    -- ap_sig_bdd_234 assign process. --
    ap_sig_bdd_234_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_234 <= (ap_const_lv1_1 = ap_CS_fsm(4 downto 4));
    end process;


    -- ap_sig_bdd_55 assign process. --
    ap_sig_bdd_55_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_55 <= (ap_const_lv1_1 = ap_CS_fsm(1 downto 1));
    end process;


    -- ap_sig_bdd_70 assign process. --
    ap_sig_bdd_70_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_70 <= (ap_const_lv1_1 = ap_CS_fsm(2 downto 2));
    end process;


    -- ap_sig_cseq_ST_st1_fsm_0 assign process. --
    ap_sig_cseq_ST_st1_fsm_0_assign_proc : process(ap_sig_bdd_21)
    begin
        if (ap_sig_bdd_21) then 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st2_fsm_1 assign process. --
    ap_sig_cseq_ST_st2_fsm_1_assign_proc : process(ap_sig_bdd_55)
    begin
        if (ap_sig_bdd_55) then 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st3_fsm_2 assign process. --
    ap_sig_cseq_ST_st3_fsm_2_assign_proc : process(ap_sig_bdd_70)
    begin
        if (ap_sig_bdd_70) then 
            ap_sig_cseq_ST_st3_fsm_2 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st3_fsm_2 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st4_fsm_3 assign process. --
    ap_sig_cseq_ST_st4_fsm_3_assign_proc : process(ap_sig_bdd_136)
    begin
        if (ap_sig_bdd_136) then 
            ap_sig_cseq_ST_st4_fsm_3 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st4_fsm_3 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st5_fsm_4 assign process. --
    ap_sig_cseq_ST_st5_fsm_4_assign_proc : process(ap_sig_bdd_234)
    begin
        if (ap_sig_bdd_234) then 
            ap_sig_cseq_ST_st5_fsm_4 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st5_fsm_4 <= ap_const_logic_0;
        end if; 
    end process;

    grp_voicerec_classifySound_fu_118_ap_start <= grp_voicerec_classifySound_fu_118_ap_start_ap_start_reg;
    grp_voicerec_classifySound_fu_118_result_q0 <= result_q0;
    grp_voicerec_preprocessSound_fu_134_ap_start <= grp_voicerec_preprocessSound_fu_134_ap_start_ap_start_reg;
    grp_voicerec_preprocessSound_fu_134_inSound_q0 <= inSound_q0;
    grp_voicerec_processChunk_fu_92_ap_start <= grp_voicerec_processChunk_fu_92_ap_start_ap_start_reg;
    grp_voicerec_processChunk_fu_92_inputSound_q0 <= outSound_q0;
    grp_voicerec_processChunk_fu_92_np <= np;
    grp_voicerec_processChunk_fu_92_sp <= i_reg_68;
    grp_voicerec_processChunk_fu_92_tmp_122 <= index_reg_80;
    i_1_fu_215_p2 <= std_logic_vector(unsigned(stride_reg_226) + unsigned(i_reg_68));
    inSound_address0 <= grp_voicerec_preprocessSound_fu_134_inSound_address0;

    -- inSound_ce0 assign process. --
    inSound_ce0_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, grp_voicerec_preprocessSound_fu_134_inSound_ce0)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1)) then 
            inSound_ce0 <= grp_voicerec_preprocessSound_fu_134_inSound_ce0;
        else 
            inSound_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    inSound_d0 <= grp_voicerec_preprocessSound_fu_134_inSound_d0;

    -- inSound_we0 assign process. --
    inSound_we0_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, grp_voicerec_preprocessSound_fu_134_inSound_we0)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1)) then 
            inSound_we0 <= grp_voicerec_preprocessSound_fu_134_inSound_we0;
        else 
            inSound_we0 <= ap_const_logic_0;
        end if; 
    end process;

    index_1_fu_209_p2 <= std_logic_vector(unsigned(index_reg_80) + unsigned(ap_const_lv32_1));

    -- outSound_address0 assign process. --
    outSound_address0_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, grp_voicerec_processChunk_fu_92_inputSound_address0, grp_voicerec_preprocessSound_fu_134_outSound_address0, ap_sig_cseq_ST_st4_fsm_3)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1)) then 
            outSound_address0 <= grp_voicerec_preprocessSound_fu_134_outSound_address0;
        elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3)) then 
            outSound_address0 <= grp_voicerec_processChunk_fu_92_inputSound_address0;
        else 
            outSound_address0 <= "XXXXXXXXXXXXX";
        end if; 
    end process;


    -- outSound_ce0 assign process. --
    outSound_ce0_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, grp_voicerec_processChunk_fu_92_inputSound_ce0, grp_voicerec_preprocessSound_fu_134_outSound_ce0, ap_sig_cseq_ST_st4_fsm_3)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1)) then 
            outSound_ce0 <= grp_voicerec_preprocessSound_fu_134_outSound_ce0;
        elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3)) then 
            outSound_ce0 <= grp_voicerec_processChunk_fu_92_inputSound_ce0;
        else 
            outSound_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    outSound_d0 <= grp_voicerec_preprocessSound_fu_134_outSound_d0;

    -- outSound_we0 assign process. --
    outSound_we0_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, grp_voicerec_preprocessSound_fu_134_outSound_we0)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1)) then 
            outSound_we0 <= grp_voicerec_preprocessSound_fu_134_outSound_we0;
        else 
            outSound_we0 <= ap_const_logic_0;
        end if; 
    end process;

    p_lshr_f_fu_176_p4 <= np(31 downto 1);
    p_lshr_fu_156_p4 <= p_neg_fu_150_p2(31 downto 1);
    p_neg_fu_150_p2 <= std_logic_vector(unsigned(ap_const_lv32_0) - unsigned(np));
    p_neg_t_fu_170_p2 <= std_logic_vector(unsigned(ap_const_lv32_0) - unsigned(tmp_1_fu_166_p1));

    -- result_address0 assign process. --
    result_address0_assign_proc : process(grp_voicerec_processChunk_fu_92_ret_address0, grp_voicerec_classifySound_fu_118_result_address0, ap_sig_cseq_ST_st4_fsm_3, ap_sig_cseq_ST_st5_fsm_4)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4)) then 
            result_address0 <= grp_voicerec_classifySound_fu_118_result_address0;
        elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3)) then 
            result_address0 <= grp_voicerec_processChunk_fu_92_ret_address0;
        else 
            result_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    -- result_ce0 assign process. --
    result_ce0_assign_proc : process(grp_voicerec_processChunk_fu_92_ret_ce0, grp_voicerec_classifySound_fu_118_result_ce0, ap_sig_cseq_ST_st4_fsm_3, ap_sig_cseq_ST_st5_fsm_4)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4)) then 
            result_ce0 <= grp_voicerec_classifySound_fu_118_result_ce0;
        elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3)) then 
            result_ce0 <= grp_voicerec_processChunk_fu_92_ret_ce0;
        else 
            result_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    result_d0 <= grp_voicerec_processChunk_fu_92_ret_d0;

    -- result_we0 assign process. --
    result_we0_assign_proc : process(grp_voicerec_processChunk_fu_92_ret_we0, ap_sig_cseq_ST_st4_fsm_3)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3)) then 
            result_we0 <= grp_voicerec_processChunk_fu_92_ret_we0;
        else 
            result_we0 <= ap_const_logic_0;
        end if; 
    end process;

    stride_fu_190_p3 <= 
        p_neg_t_fu_170_p2 when (tmp_3_fu_142_p3(0) = '1') else 
        tmp_2_fu_186_p1;
    tmp_1_fu_166_p1 <= std_logic_vector(resize(unsigned(p_lshr_fu_156_p4),32));
    tmp_2_fu_186_p1 <= std_logic_vector(resize(unsigned(p_lshr_f_fu_176_p4),32));
    tmp_3_fu_142_p3 <= np(31 downto 31);
    tmp_fu_198_p2 <= std_logic_vector(unsigned(i_reg_68) + unsigned(np));
    tmp_s_fu_203_p2 <= "1" when (signed(tmp_fu_198_p2) < signed(ap_const_lv32_1F40)) else "0";
end behav;