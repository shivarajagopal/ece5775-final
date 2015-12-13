-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.2
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity voicerec_classifySound is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    result_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    result_ce0 : OUT STD_LOGIC;
    result_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of voicerec_classifySound is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_st1_fsm_0 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    constant ap_ST_st2_fsm_1 : STD_LOGIC_VECTOR (8 downto 0) := "000000010";
    constant ap_ST_st3_fsm_2 : STD_LOGIC_VECTOR (8 downto 0) := "000000100";
    constant ap_ST_st4_fsm_3 : STD_LOGIC_VECTOR (8 downto 0) := "000001000";
    constant ap_ST_st5_fsm_4 : STD_LOGIC_VECTOR (8 downto 0) := "000010000";
    constant ap_ST_st6_fsm_5 : STD_LOGIC_VECTOR (8 downto 0) := "000100000";
    constant ap_ST_st7_fsm_6 : STD_LOGIC_VECTOR (8 downto 0) := "001000000";
    constant ap_ST_st8_fsm_7 : STD_LOGIC_VECTOR (8 downto 0) := "010000000";
    constant ap_ST_st9_fsm_8 : STD_LOGIC_VECTOR (8 downto 0) := "100000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv6_3F : STD_LOGIC_VECTOR (5 downto 0) := "111111";
    constant ap_const_lv6_1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_const_lv4_E : STD_LOGIC_VECTOR (3 downto 0) := "1110";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv3_4 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_lv32_17 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010111";
    constant ap_const_lv32_1E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011110";
    constant ap_const_lv8_FF : STD_LOGIC_VECTOR (7 downto 0) := "11111111";
    constant ap_const_lv23_0 : STD_LOGIC_VECTOR (22 downto 0) := "00000000000000000000000";
    constant ap_const_lv5_2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_sig_cseq_ST_st1_fsm_0 : STD_LOGIC;
    signal ap_sig_bdd_27 : BOOLEAN;
    signal output_r_address0 : STD_LOGIC_VECTOR (1 downto 0);
    signal output_r_ce0 : STD_LOGIC;
    signal output_r_we0 : STD_LOGIC;
    signal output_r_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal output_r_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal i_1_fu_187_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal i_1_reg_394 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_sig_cseq_ST_st2_fsm_1 : STD_LOGIC;
    signal ap_sig_bdd_56 : BOOLEAN;
    signal tmp_8_fu_217_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_8_reg_399 : STD_LOGIC_VECTOR (10 downto 0);
    signal exitcond1_fu_181_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal result_addr1_cast_fu_223_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal result_addr1_cast_reg_404 : STD_LOGIC_VECTOR (11 downto 0);
    signal j_1_fu_237_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal j_1_reg_412 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_sig_cseq_ST_st3_fsm_2 : STD_LOGIC;
    signal ap_sig_bdd_73 : BOOLEAN;
    signal exitcond_fu_231_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_1_fu_261_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_1_reg_422 : STD_LOGIC_VECTOR (10 downto 0);
    signal guess_cast1_fu_274_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal guess_cast1_reg_427 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_sig_cseq_ST_st6_fsm_5 : STD_LOGIC;
    signal ap_sig_bdd_89 : BOOLEAN;
    signal j_2_fu_284_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal j_2_reg_435 : STD_LOGIC_VECTOR (2 downto 0);
    signal exitcond_i_fu_278_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal max_reg_445 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_sig_cseq_ST_st7_fsm_6 : STD_LOGIC;
    signal ap_sig_bdd_104 : BOOLEAN;
    signal tmp_9_fu_176_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_9_reg_452 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_sig_cseq_ST_st8_fsm_7 : STD_LOGIC;
    signal ap_sig_bdd_113 : BOOLEAN;
    signal guess_1_fu_377_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_sig_cseq_ST_st9_fsm_8 : STD_LOGIC;
    signal ap_sig_bdd_122 : BOOLEAN;
    signal max_1_fu_384_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal flatInput_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal flatInput_ce0 : STD_LOGIC;
    signal flatInput_we0 : STD_LOGIC;
    signal flatInput_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal flatInput_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_voicerec_feedForward_fu_161_ap_start : STD_LOGIC;
    signal grp_voicerec_feedForward_fu_161_ap_done : STD_LOGIC;
    signal grp_voicerec_feedForward_fu_161_ap_idle : STD_LOGIC;
    signal grp_voicerec_feedForward_fu_161_ap_ready : STD_LOGIC;
    signal grp_voicerec_feedForward_fu_161_pattern_address0 : STD_LOGIC_VECTOR (9 downto 0);
    signal grp_voicerec_feedForward_fu_161_pattern_ce0 : STD_LOGIC;
    signal grp_voicerec_feedForward_fu_161_pattern_q0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_voicerec_feedForward_fu_161_output_r_address0 : STD_LOGIC_VECTOR (1 downto 0);
    signal grp_voicerec_feedForward_fu_161_output_r_ce0 : STD_LOGIC;
    signal grp_voicerec_feedForward_fu_161_output_r_we0 : STD_LOGIC;
    signal grp_voicerec_feedForward_fu_161_output_r_d0 : STD_LOGIC_VECTOR (31 downto 0);
    signal i_reg_104 : STD_LOGIC_VECTOR (5 downto 0);
    signal j_reg_115 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_sig_cseq_ST_st4_fsm_3 : STD_LOGIC;
    signal ap_sig_bdd_164 : BOOLEAN;
    signal guess_reg_126 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_sig_cseq_ST_st5_fsm_4 : STD_LOGIC;
    signal ap_sig_bdd_175 : BOOLEAN;
    signal guess_i_reg_137 : STD_LOGIC_VECTOR (31 downto 0);
    signal second_max_reg_149 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_voicerec_feedForward_fu_161_ap_start_ap_start_reg : STD_LOGIC := '0';
    signal tmp_11_fu_256_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_2_fu_269_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_i_fu_290_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_9_fu_176_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_9_fu_176_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal p_shl_fu_193_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal p_shl2_fu_205_p3 : STD_LOGIC_VECTOR (6 downto 0);
    signal p_shl_cast_fu_201_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal p_shl2_cast_fu_213_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_9_trn_cast_fu_243_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal result_addr2_fu_247_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal result_addr2_cast_fu_252_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal j_cast3_fu_227_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_1_cast_fu_266_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal max_to_int_fu_295_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal second_max_to_int_fu_312_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_fu_298_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_3_fu_308_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal notrhs_fu_336_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal notlhs_fu_330_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_4_fu_316_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_5_fu_326_p1 : STD_LOGIC_VECTOR (22 downto 0);
    signal notrhs7_fu_354_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal notlhs6_fu_348_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_6_fu_342_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_7_fu_360_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_s_fu_366_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_10_fu_372_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_9_fu_176_opcode : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_return_preg : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (8 downto 0);

    component voicerec_feedForward IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        pattern_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
        pattern_ce0 : OUT STD_LOGIC;
        pattern_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        output_r_address0 : OUT STD_LOGIC_VECTOR (1 downto 0);
        output_r_ce0 : OUT STD_LOGIC;
        output_r_we0 : OUT STD_LOGIC;
        output_r_d0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component voicerec_fcmp_32ns_32ns_1_1 IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        opcode : IN STD_LOGIC_VECTOR (4 downto 0);
        dout : OUT STD_LOGIC_VECTOR (0 downto 0) );
    end component;


    component voicerec_classifySound_output_r IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (1 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (31 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component voicerec_classifySound_flatInput IS
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
        d0 : IN STD_LOGIC_VECTOR (31 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    output_r_U : component voicerec_classifySound_output_r
    generic map (
        DataWidth => 32,
        AddressRange => 4,
        AddressWidth => 2)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => output_r_address0,
        ce0 => output_r_ce0,
        we0 => output_r_we0,
        d0 => output_r_d0,
        q0 => output_r_q0);

    flatInput_U : component voicerec_classifySound_flatInput
    generic map (
        DataWidth => 32,
        AddressRange => 882,
        AddressWidth => 10)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => flatInput_address0,
        ce0 => flatInput_ce0,
        we0 => flatInput_we0,
        d0 => flatInput_d0,
        q0 => flatInput_q0);

    grp_voicerec_feedForward_fu_161 : component voicerec_feedForward
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_voicerec_feedForward_fu_161_ap_start,
        ap_done => grp_voicerec_feedForward_fu_161_ap_done,
        ap_idle => grp_voicerec_feedForward_fu_161_ap_idle,
        ap_ready => grp_voicerec_feedForward_fu_161_ap_ready,
        pattern_address0 => grp_voicerec_feedForward_fu_161_pattern_address0,
        pattern_ce0 => grp_voicerec_feedForward_fu_161_pattern_ce0,
        pattern_q0 => grp_voicerec_feedForward_fu_161_pattern_q0,
        output_r_address0 => grp_voicerec_feedForward_fu_161_output_r_address0,
        output_r_ce0 => grp_voicerec_feedForward_fu_161_output_r_ce0,
        output_r_we0 => grp_voicerec_feedForward_fu_161_output_r_we0,
        output_r_d0 => grp_voicerec_feedForward_fu_161_output_r_d0);

    voicerec_fcmp_32ns_32ns_1_1_U46 : component voicerec_fcmp_32ns_32ns_1_1
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 1)
    port map (
        din0 => tmp_9_fu_176_p0,
        din1 => tmp_9_fu_176_p1,
        opcode => tmp_9_fu_176_opcode,
        dout => tmp_9_fu_176_p2);





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


    -- ap_return_preg assign process. --
    ap_return_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_preg <= ap_const_lv32_0;
            else
                if (((ap_const_logic_1 = ap_sig_cseq_ST_st6_fsm_5) and not((ap_const_lv1_0 = exitcond_i_fu_278_p2)))) then 
                    ap_return_preg <= guess_i_reg_137;
                end if; 
            end if;
        end if;
    end process;


    -- grp_voicerec_feedForward_fu_161_ap_start_ap_start_reg assign process. --
    grp_voicerec_feedForward_fu_161_ap_start_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_voicerec_feedForward_fu_161_ap_start_ap_start_reg <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not((exitcond1_fu_181_p2 = ap_const_lv1_0)))) then 
                    grp_voicerec_feedForward_fu_161_ap_start_ap_start_reg <= ap_const_logic_1;
                elsif ((ap_const_logic_1 = grp_voicerec_feedForward_fu_161_ap_ready)) then 
                    grp_voicerec_feedForward_fu_161_ap_start_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    -- guess_reg_126 assign process. --
    guess_reg_126_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st9_fsm_8)) then 
                guess_reg_126 <= j_2_reg_435;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4) and not((ap_const_logic_0 = grp_voicerec_feedForward_fu_161_ap_done)))) then 
                guess_reg_126 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;

    -- i_reg_104 assign process. --
    i_reg_104_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2) and not((ap_const_lv1_0 = exitcond_fu_231_p2)))) then 
                i_reg_104 <= i_1_reg_394;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not((ap_start = ap_const_logic_0)))) then 
                i_reg_104 <= ap_const_lv6_0;
            end if; 
        end if;
    end process;

    -- j_reg_115 assign process. --
    j_reg_115_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (exitcond1_fu_181_p2 = ap_const_lv1_0))) then 
                j_reg_115 <= ap_const_lv4_0;
            elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3)) then 
                j_reg_115 <= j_1_reg_412;
            end if; 
        end if;
    end process;

    -- second_max_reg_149 assign process. --
    second_max_reg_149_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st9_fsm_8)) then 
                second_max_reg_149 <= max_1_fu_384_p3;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4) and not((ap_const_logic_0 = grp_voicerec_feedForward_fu_161_ap_done)))) then 
                second_max_reg_149 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st6_fsm_5)) then
                    guess_cast1_reg_427(2 downto 0) <= guess_cast1_fu_274_p1(2 downto 0);
                j_2_reg_435 <= j_2_fu_284_p2;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st9_fsm_8)) then
                guess_i_reg_137 <= guess_1_fu_377_p3;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1)) then
                i_1_reg_394 <= i_1_fu_187_p2;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2)) then
                j_1_reg_412 <= j_1_fu_237_p2;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st7_fsm_6)) then
                max_reg_445 <= output_r_q0;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (exitcond1_fu_181_p2 = ap_const_lv1_0))) then
                    result_addr1_cast_reg_404(11 downto 1) <= result_addr1_cast_fu_223_p1(11 downto 1);
                    tmp_8_reg_399(10 downto 1) <= tmp_8_fu_217_p2(10 downto 1);
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2) and (ap_const_lv1_0 = exitcond_fu_231_p2))) then
                tmp_1_reg_422 <= tmp_1_fu_261_p2;
            end if;
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st8_fsm_7)) then
                tmp_9_reg_452 <= tmp_9_fu_176_p2;
            end if;
        end if;
    end process;
    tmp_8_reg_399(0) <= '0';
    result_addr1_cast_reg_404(0) <= '0';
    guess_cast1_reg_427(31 downto 3) <= "00000000000000000000000000000";

    -- the next state (ap_NS_fsm) of the state machine. --
    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, exitcond1_fu_181_p2, exitcond_fu_231_p2, exitcond_i_fu_278_p2, grp_voicerec_feedForward_fu_161_ap_done)
    begin
        case ap_CS_fsm is
            when ap_ST_st1_fsm_0 => 
                if (not((ap_start = ap_const_logic_0))) then
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                else
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                end if;
            when ap_ST_st2_fsm_1 => 
                if ((exitcond1_fu_181_p2 = ap_const_lv1_0)) then
                    ap_NS_fsm <= ap_ST_st3_fsm_2;
                else
                    ap_NS_fsm <= ap_ST_st5_fsm_4;
                end if;
            when ap_ST_st3_fsm_2 => 
                if ((ap_const_lv1_0 = exitcond_fu_231_p2)) then
                    ap_NS_fsm <= ap_ST_st4_fsm_3;
                else
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                end if;
            when ap_ST_st4_fsm_3 => 
                ap_NS_fsm <= ap_ST_st3_fsm_2;
            when ap_ST_st5_fsm_4 => 
                if (not((ap_const_logic_0 = grp_voicerec_feedForward_fu_161_ap_done))) then
                    ap_NS_fsm <= ap_ST_st6_fsm_5;
                else
                    ap_NS_fsm <= ap_ST_st5_fsm_4;
                end if;
            when ap_ST_st6_fsm_5 => 
                if (not((ap_const_lv1_0 = exitcond_i_fu_278_p2))) then
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                else
                    ap_NS_fsm <= ap_ST_st7_fsm_6;
                end if;
            when ap_ST_st7_fsm_6 => 
                ap_NS_fsm <= ap_ST_st8_fsm_7;
            when ap_ST_st8_fsm_7 => 
                ap_NS_fsm <= ap_ST_st9_fsm_8;
            when ap_ST_st9_fsm_8 => 
                ap_NS_fsm <= ap_ST_st6_fsm_5;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXX";
        end case;
    end process;

    -- ap_done assign process. --
    ap_done_assign_proc : process(ap_start, ap_sig_cseq_ST_st1_fsm_0, ap_sig_cseq_ST_st6_fsm_5, exitcond_i_fu_278_p2)
    begin
        if (((not((ap_const_logic_1 = ap_start)) and (ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0)) or ((ap_const_logic_1 = ap_sig_cseq_ST_st6_fsm_5) and not((ap_const_lv1_0 = exitcond_i_fu_278_p2))))) then 
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
    ap_ready_assign_proc : process(ap_sig_cseq_ST_st6_fsm_5, exitcond_i_fu_278_p2)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st6_fsm_5) and not((ap_const_lv1_0 = exitcond_i_fu_278_p2)))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_return assign process. --
    ap_return_assign_proc : process(ap_sig_cseq_ST_st6_fsm_5, exitcond_i_fu_278_p2, guess_i_reg_137, ap_return_preg)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st6_fsm_5) and not((ap_const_lv1_0 = exitcond_i_fu_278_p2)))) then 
            ap_return <= guess_i_reg_137;
        else 
            ap_return <= ap_return_preg;
        end if; 
    end process;


    -- ap_sig_bdd_104 assign process. --
    ap_sig_bdd_104_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_104 <= (ap_const_lv1_1 = ap_CS_fsm(6 downto 6));
    end process;


    -- ap_sig_bdd_113 assign process. --
    ap_sig_bdd_113_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_113 <= (ap_const_lv1_1 = ap_CS_fsm(7 downto 7));
    end process;


    -- ap_sig_bdd_122 assign process. --
    ap_sig_bdd_122_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_122 <= (ap_const_lv1_1 = ap_CS_fsm(8 downto 8));
    end process;


    -- ap_sig_bdd_164 assign process. --
    ap_sig_bdd_164_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_164 <= (ap_const_lv1_1 = ap_CS_fsm(3 downto 3));
    end process;


    -- ap_sig_bdd_175 assign process. --
    ap_sig_bdd_175_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_175 <= (ap_const_lv1_1 = ap_CS_fsm(4 downto 4));
    end process;


    -- ap_sig_bdd_27 assign process. --
    ap_sig_bdd_27_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_27 <= (ap_CS_fsm(0 downto 0) = ap_const_lv1_1);
    end process;


    -- ap_sig_bdd_56 assign process. --
    ap_sig_bdd_56_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_56 <= (ap_const_lv1_1 = ap_CS_fsm(1 downto 1));
    end process;


    -- ap_sig_bdd_73 assign process. --
    ap_sig_bdd_73_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_73 <= (ap_const_lv1_1 = ap_CS_fsm(2 downto 2));
    end process;


    -- ap_sig_bdd_89 assign process. --
    ap_sig_bdd_89_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_89 <= (ap_const_lv1_1 = ap_CS_fsm(5 downto 5));
    end process;


    -- ap_sig_cseq_ST_st1_fsm_0 assign process. --
    ap_sig_cseq_ST_st1_fsm_0_assign_proc : process(ap_sig_bdd_27)
    begin
        if (ap_sig_bdd_27) then 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st2_fsm_1 assign process. --
    ap_sig_cseq_ST_st2_fsm_1_assign_proc : process(ap_sig_bdd_56)
    begin
        if (ap_sig_bdd_56) then 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st3_fsm_2 assign process. --
    ap_sig_cseq_ST_st3_fsm_2_assign_proc : process(ap_sig_bdd_73)
    begin
        if (ap_sig_bdd_73) then 
            ap_sig_cseq_ST_st3_fsm_2 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st3_fsm_2 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st4_fsm_3 assign process. --
    ap_sig_cseq_ST_st4_fsm_3_assign_proc : process(ap_sig_bdd_164)
    begin
        if (ap_sig_bdd_164) then 
            ap_sig_cseq_ST_st4_fsm_3 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st4_fsm_3 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st5_fsm_4 assign process. --
    ap_sig_cseq_ST_st5_fsm_4_assign_proc : process(ap_sig_bdd_175)
    begin
        if (ap_sig_bdd_175) then 
            ap_sig_cseq_ST_st5_fsm_4 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st5_fsm_4 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st6_fsm_5 assign process. --
    ap_sig_cseq_ST_st6_fsm_5_assign_proc : process(ap_sig_bdd_89)
    begin
        if (ap_sig_bdd_89) then 
            ap_sig_cseq_ST_st6_fsm_5 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st6_fsm_5 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st7_fsm_6 assign process. --
    ap_sig_cseq_ST_st7_fsm_6_assign_proc : process(ap_sig_bdd_104)
    begin
        if (ap_sig_bdd_104) then 
            ap_sig_cseq_ST_st7_fsm_6 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st7_fsm_6 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st8_fsm_7 assign process. --
    ap_sig_cseq_ST_st8_fsm_7_assign_proc : process(ap_sig_bdd_113)
    begin
        if (ap_sig_bdd_113) then 
            ap_sig_cseq_ST_st8_fsm_7 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st8_fsm_7 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st9_fsm_8 assign process. --
    ap_sig_cseq_ST_st9_fsm_8_assign_proc : process(ap_sig_bdd_122)
    begin
        if (ap_sig_bdd_122) then 
            ap_sig_cseq_ST_st9_fsm_8 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st9_fsm_8 <= ap_const_logic_0;
        end if; 
    end process;

    exitcond1_fu_181_p2 <= "1" when (i_reg_104 = ap_const_lv6_3F) else "0";
    exitcond_fu_231_p2 <= "1" when (j_reg_115 = ap_const_lv4_E) else "0";
    exitcond_i_fu_278_p2 <= "1" when (guess_reg_126 = ap_const_lv3_4) else "0";

    -- flatInput_address0 assign process. --
    flatInput_address0_assign_proc : process(grp_voicerec_feedForward_fu_161_pattern_address0, ap_sig_cseq_ST_st4_fsm_3, ap_sig_cseq_ST_st5_fsm_4, tmp_2_fu_269_p1)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3)) then 
            flatInput_address0 <= tmp_2_fu_269_p1(10 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4)) then 
            flatInput_address0 <= grp_voicerec_feedForward_fu_161_pattern_address0;
        else 
            flatInput_address0 <= "XXXXXXXXXX";
        end if; 
    end process;


    -- flatInput_ce0 assign process. --
    flatInput_ce0_assign_proc : process(grp_voicerec_feedForward_fu_161_pattern_ce0, ap_sig_cseq_ST_st4_fsm_3, ap_sig_cseq_ST_st5_fsm_4)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3)) then 
            flatInput_ce0 <= ap_const_logic_1;
        elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4)) then 
            flatInput_ce0 <= grp_voicerec_feedForward_fu_161_pattern_ce0;
        else 
            flatInput_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    flatInput_d0 <= result_q0;

    -- flatInput_we0 assign process. --
    flatInput_we0_assign_proc : process(ap_sig_cseq_ST_st4_fsm_3)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st4_fsm_3))) then 
            flatInput_we0 <= ap_const_logic_1;
        else 
            flatInput_we0 <= ap_const_logic_0;
        end if; 
    end process;

    grp_voicerec_feedForward_fu_161_ap_start <= grp_voicerec_feedForward_fu_161_ap_start_ap_start_reg;
    grp_voicerec_feedForward_fu_161_pattern_q0 <= flatInput_q0;
    guess_1_fu_377_p3 <= 
        guess_cast1_reg_427 when (tmp_10_fu_372_p2(0) = '1') else 
        guess_i_reg_137;
    guess_cast1_fu_274_p1 <= std_logic_vector(resize(unsigned(guess_reg_126),32));
    i_1_fu_187_p2 <= std_logic_vector(unsigned(i_reg_104) + unsigned(ap_const_lv6_1));
    j_1_fu_237_p2 <= std_logic_vector(unsigned(j_reg_115) + unsigned(ap_const_lv4_1));
    j_2_fu_284_p2 <= std_logic_vector(unsigned(guess_reg_126) + unsigned(ap_const_lv3_1));
    j_cast3_fu_227_p1 <= std_logic_vector(resize(unsigned(j_reg_115),11));
    max_1_fu_384_p3 <= 
        max_reg_445 when (tmp_10_fu_372_p2(0) = '1') else 
        second_max_reg_149;
    max_to_int_fu_295_p1 <= max_reg_445;
    notlhs6_fu_348_p2 <= "0" when (tmp_4_fu_316_p4 = ap_const_lv8_FF) else "1";
    notlhs_fu_330_p2 <= "0" when (tmp_fu_298_p4 = ap_const_lv8_FF) else "1";
    notrhs7_fu_354_p2 <= "1" when (tmp_5_fu_326_p1 = ap_const_lv23_0) else "0";
    notrhs_fu_336_p2 <= "1" when (tmp_3_fu_308_p1 = ap_const_lv23_0) else "0";

    -- output_r_address0 assign process. --
    output_r_address0_assign_proc : process(ap_sig_cseq_ST_st6_fsm_5, grp_voicerec_feedForward_fu_161_output_r_address0, ap_sig_cseq_ST_st5_fsm_4, tmp_i_fu_290_p1)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st6_fsm_5)) then 
            output_r_address0 <= tmp_i_fu_290_p1(2 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4)) then 
            output_r_address0 <= grp_voicerec_feedForward_fu_161_output_r_address0;
        else 
            output_r_address0 <= "XX";
        end if; 
    end process;


    -- output_r_ce0 assign process. --
    output_r_ce0_assign_proc : process(ap_sig_cseq_ST_st6_fsm_5, grp_voicerec_feedForward_fu_161_output_r_ce0, ap_sig_cseq_ST_st5_fsm_4)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st6_fsm_5)) then 
            output_r_ce0 <= ap_const_logic_1;
        elsif ((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4)) then 
            output_r_ce0 <= grp_voicerec_feedForward_fu_161_output_r_ce0;
        else 
            output_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    output_r_d0 <= grp_voicerec_feedForward_fu_161_output_r_d0;

    -- output_r_we0 assign process. --
    output_r_we0_assign_proc : process(grp_voicerec_feedForward_fu_161_output_r_we0, ap_sig_cseq_ST_st5_fsm_4)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st5_fsm_4)) then 
            output_r_we0 <= grp_voicerec_feedForward_fu_161_output_r_we0;
        else 
            output_r_we0 <= ap_const_logic_0;
        end if; 
    end process;

    p_shl2_cast_fu_213_p1 <= std_logic_vector(resize(unsigned(p_shl2_fu_205_p3),11));
    p_shl2_fu_205_p3 <= (i_reg_104 & ap_const_lv1_0);
    p_shl_cast_fu_201_p1 <= std_logic_vector(resize(unsigned(p_shl_fu_193_p3),11));
    p_shl_fu_193_p3 <= (i_reg_104 & ap_const_lv4_0);
        result_addr1_cast_fu_223_p1 <= std_logic_vector(resize(signed(tmp_8_fu_217_p2),12));

        result_addr2_cast_fu_252_p1 <= std_logic_vector(resize(signed(result_addr2_fu_247_p2),32));

    result_addr2_fu_247_p2 <= std_logic_vector(unsigned(tmp_9_trn_cast_fu_243_p1) + unsigned(result_addr1_cast_reg_404));
    result_address0 <= tmp_11_fu_256_p1(10 - 1 downto 0);

    -- result_ce0 assign process. --
    result_ce0_assign_proc : process(ap_sig_cseq_ST_st3_fsm_2)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2)) then 
            result_ce0 <= ap_const_logic_1;
        else 
            result_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    second_max_to_int_fu_312_p1 <= second_max_reg_149;
    tmp_10_fu_372_p2 <= (tmp_s_fu_366_p2 and tmp_9_reg_452);
    tmp_11_fu_256_p1 <= std_logic_vector(resize(unsigned(result_addr2_cast_fu_252_p1),64));
        tmp_1_cast_fu_266_p1 <= std_logic_vector(resize(signed(tmp_1_reg_422),32));

    tmp_1_fu_261_p2 <= std_logic_vector(unsigned(tmp_8_reg_399) + unsigned(j_cast3_fu_227_p1));
    tmp_2_fu_269_p1 <= std_logic_vector(resize(unsigned(tmp_1_cast_fu_266_p1),64));
    tmp_3_fu_308_p1 <= max_to_int_fu_295_p1(23 - 1 downto 0);
    tmp_4_fu_316_p4 <= second_max_to_int_fu_312_p1(30 downto 23);
    tmp_5_fu_326_p1 <= second_max_to_int_fu_312_p1(23 - 1 downto 0);
    tmp_6_fu_342_p2 <= (notrhs_fu_336_p2 or notlhs_fu_330_p2);
    tmp_7_fu_360_p2 <= (notrhs7_fu_354_p2 or notlhs6_fu_348_p2);
    tmp_8_fu_217_p2 <= std_logic_vector(unsigned(p_shl_cast_fu_201_p1) - unsigned(p_shl2_cast_fu_213_p1));
    tmp_9_fu_176_opcode <= ap_const_lv5_2;
    tmp_9_fu_176_p0 <= max_reg_445;
    tmp_9_fu_176_p1 <= second_max_reg_149;
    tmp_9_trn_cast_fu_243_p1 <= std_logic_vector(resize(unsigned(j_reg_115),12));
    tmp_fu_298_p4 <= max_to_int_fu_295_p1(30 downto 23);
    tmp_i_fu_290_p1 <= std_logic_vector(resize(unsigned(guess_reg_126),64));
    tmp_s_fu_366_p2 <= (tmp_6_fu_342_p2 and tmp_7_fu_360_p2);
end behav;