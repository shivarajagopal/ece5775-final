; ModuleID = '/home/student/tjp79/classes/ece5775/audio_lab/audio.prj/solution1/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@p_str = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=3 type=[10 x i8]*]
@p_str1 = private unnamed_addr constant [7 x i8] c"fir_io\00", align 1 ; [#uses=3 type=[7 x i8]*]
@p_str2 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=7 type=[1 x i8]*]
@c = internal unnamed_addr constant [59 x i16] [i16 -378, i16 -73, i16 27, i16 170, i16 298, i16 352, i16 302, i16 168, i16 14, i16 -80, i16 -64, i16 53, i16 186, i16 216, i16 40, i16 -356, i16 -867, i16 -1283, i16 -1366, i16 -954, i16 -51, i16 1132, i16 2227, i16 2829, i16 2647, i16 1633, i16 25, i16 -1712, i16 -3042, i16 29229, i16 -3042, i16 -1712, i16 25, i16 1633, i16 2647, i16 2829, i16 2227, i16 1132, i16 -51, i16 -954, i16 -1366, i16 -1283, i16 -867, i16 -356, i16 40, i16 216, i16 186, i16 53, i16 -64, i16 -80, i16 14, i16 168, i16 302, i16 352, i16 298, i16 170, i16 27, i16 -73, i16 -378], align 16 ; [#uses=1 type=[59 x i16]*]
@shift_reg = internal unnamed_addr global [58 x i16] zeroinitializer, align 16 ; [#uses=4 type=[58 x i16]*]
@p_str3 = private unnamed_addr constant [5 x i8] c"loop\00", align 1 ; [#uses=3 type=[5 x i8]*]
@str = internal constant [4 x i8] c"fir\00"       ; [#uses=1 type=[4 x i8]*]

; [#uses=0]
define void @fir(i16* %y, i16 signext %x) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap(i16* %y) nounwind, !map !0
  call void (...)* @_ssdm_op_SpecBitsMap(i16 %x) nounwind, !map !6
  call void (...)* @_ssdm_op_SpecTopModule([4 x i8]* @str) nounwind
  %x_read = call i16 @_ssdm_op_Read.ap_auto.i16(i16 %x) nounwind ; [#uses=2 type=i16]
  call void @llvm.dbg.value(metadata !{i16 %x_read}, i64 0, metadata !12), !dbg !22 ; [debug line = 5:10] [debug variable = x]
  call void @llvm.dbg.value(metadata !{i16* %y}, i64 0, metadata !23), !dbg !24 ; [debug line = 4:11] [debug variable = y]
  call void @llvm.dbg.value(metadata !{i16 %x}, i64 0, metadata !12), !dbg !22 ; [debug line = 5:10] [debug variable = x]
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [7 x i8]* @p_str1, [1 x i8]* @p_str2, [1 x i8]* @p_str2) nounwind, !dbg !25 ; [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface(i16* %y, [10 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [7 x i8]* @p_str1, [1 x i8]* @p_str2, [1 x i8]* @p_str2) nounwind, !dbg !25 ; [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface(i16 %x, [10 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [7 x i8]* @p_str1, [1 x i8]* @p_str2, [1 x i8]* @p_str2) nounwind, !dbg !25 ; [debug line = 7:1]
  %shift_reg_load = load i16* getelementptr inbounds ([58 x i16]* @shift_reg, i64 0, i64 57), align 2, !dbg !27 ; [#uses=1 type=i16] [debug line = 16:3]
  %tmp_1_cast = sext i16 %shift_reg_load to i26, !dbg !27 ; [#uses=1 type=i26] [debug line = 16:3]
  %acc = mul i26 %tmp_1_cast, -378, !dbg !27      ; [#uses=1 type=i26] [debug line = 16:3]
  %acc_cast = sext i26 %acc to i37, !dbg !27      ; [#uses=1 type=i37] [debug line = 16:3]
  call void @llvm.dbg.value(metadata !{i26 %acc}, i64 0, metadata !28), !dbg !27 ; [debug line = 16:3] [debug variable = acc]
  br label %1, !dbg !32                           ; [debug line = 17:14]

; <label>:1                                       ; preds = %2, %0
  %acc1 = phi i37 [ %acc_cast, %0 ], [ %acc_2, %2 ] ; [#uses=2 type=i37]
  %i = phi i6 [ -7, %0 ], [ %i_1, %2 ]            ; [#uses=3 type=i6]
  %tmp_2 = trunc i37 %acc1 to i31, !dbg !32       ; [#uses=1 type=i31] [debug line = 17:14]
  %tmp_3 = icmp eq i6 %i, 0, !dbg !32             ; [#uses=1 type=i1] [debug line = 17:14]
  br i1 %tmp_3, label %3, label %2, !dbg !32      ; [debug line = 17:14]

; <label>:2                                       ; preds = %1
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 57, i64 57, i64 57) nounwind ; [#uses=0 type=i32]
  call void (...)* @_ssdm_op_SpecLoopName([5 x i8]* @p_str3) nounwind, !dbg !34 ; [debug line = 17:33]
  %tmp = call i32 (...)* @_ssdm_op_SpecRegionBegin([5 x i8]* @p_str3) nounwind, !dbg !36 ; [#uses=1 type=i32] [debug line = 17:63]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str2) nounwind, !dbg !37 ; [debug line = 18:1]
  %i_1 = add i6 %i, -1, !dbg !38                  ; [#uses=2 type=i6] [debug line = 18:5]
  %tmp_s = zext i6 %i_1 to i64, !dbg !38          ; [#uses=1 type=i64] [debug line = 18:5]
  %shift_reg_addr = getelementptr inbounds [58 x i16]* @shift_reg, i64 0, i64 %tmp_s, !dbg !38 ; [#uses=1 type=i16*] [debug line = 18:5]
  %shift_reg_load_1 = load i16* %shift_reg_addr, align 2, !dbg !38 ; [#uses=2 type=i16] [debug line = 18:5]
  %tmp_2_cast = sext i16 %shift_reg_load_1 to i32, !dbg !38 ; [#uses=1 type=i32] [debug line = 18:5]
  %tmp_6 = zext i6 %i to i64, !dbg !38            ; [#uses=2 type=i64] [debug line = 18:5]
  %c_addr = getelementptr inbounds [59 x i16]* @c, i64 0, i64 %tmp_6, !dbg !38 ; [#uses=1 type=i16*] [debug line = 18:5]
  %c_load = load i16* %c_addr, align 2, !dbg !38  ; [#uses=1 type=i16] [debug line = 18:5]
  %tmp_9_cast = sext i16 %c_load to i32, !dbg !38 ; [#uses=1 type=i32] [debug line = 18:5]
  %tmp_1 = mul i32 %tmp_9_cast, %tmp_2_cast, !dbg !38 ; [#uses=1 type=i32] [debug line = 18:5]
  %tmp_10_cast = sext i32 %tmp_1 to i37, !dbg !38 ; [#uses=1 type=i37] [debug line = 18:5]
  %acc_2 = add i37 %tmp_10_cast, %acc1, !dbg !38  ; [#uses=1 type=i37] [debug line = 18:5]
  call void @llvm.dbg.value(metadata !{i37 %acc_2}, i64 0, metadata !28), !dbg !38 ; [debug line = 18:5] [debug variable = acc]
  %shift_reg_addr_1 = getelementptr inbounds [58 x i16]* @shift_reg, i64 0, i64 %tmp_6, !dbg !39 ; [#uses=1 type=i16*] [debug line = 19:5]
  store i16 %shift_reg_load_1, i16* %shift_reg_addr_1, align 2, !dbg !39 ; [debug line = 19:5]
  %empty_4 = call i32 (...)* @_ssdm_op_SpecRegionEnd([5 x i8]* @p_str3, i32 %tmp) nounwind, !dbg !40 ; [#uses=0 type=i32] [debug line = 20:3]
  call void @llvm.dbg.value(metadata !{i6 %i_1}, i64 0, metadata !41), !dbg !43 ; [debug line = 17:27] [debug variable = i]
  br label %1, !dbg !43                           ; [debug line = 17:27]

; <label>:3                                       ; preds = %1
  %tmp_4_cast = sext i16 %x_read to i26, !dbg !44 ; [#uses=1 type=i26] [debug line = 21:3]
  %tmp_5 = mul i26 %tmp_4_cast, -378, !dbg !44    ; [#uses=1 type=i26] [debug line = 21:3]
  %tmp_5_cast = sext i26 %tmp_5 to i31, !dbg !44  ; [#uses=1 type=i31] [debug line = 21:3]
  %acc_1 = add i31 %tmp_2, %tmp_5_cast, !dbg !44  ; [#uses=1 type=i31] [debug line = 21:3]
  call void @llvm.dbg.value(metadata !{i31 %acc_1}, i64 0, metadata !28), !dbg !44 ; [debug line = 21:3] [debug variable = acc]
  store i16 %x_read, i16* getelementptr inbounds ([58 x i16]* @shift_reg, i64 0, i64 0), align 16, !dbg !45 ; [debug line = 22:3]
  %tmp_8 = call i16 @_ssdm_op_PartSelect.i16.i31.i32.i32(i31 %acc_1, i32 15, i32 30), !dbg !46 ; [#uses=1 type=i16] [debug line = 23:3]
  call void @_ssdm_op_Write.ap_auto.i16P(i16* %y, i16 %tmp_8) nounwind, !dbg !46 ; [debug line = 23:3]
  ret void, !dbg !47                              ; [debug line = 24:1]
}

; [#uses=3]
define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

; [#uses=7]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=2]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak i16 @_ssdm_op_PartSelect.i16.i31.i32.i32(i31, i32, i32) nounwind readnone {
entry:
  %empty = call i31 @llvm.part.select.i31(i31 %0, i32 %1, i32 %2) ; [#uses=1 type=i31]
  %empty_5 = trunc i31 %empty to i16              ; [#uses=1 type=i16]
  ret i16 %empty_5
}

; [#uses=1]
define weak i16 @_ssdm_op_Read.ap_auto.i16(i16) {
entry:
  ret i16 %0
}

; [#uses=1]
define weak void @_ssdm_op_Write.ap_auto.i16P(i16*, i16) {
entry:
  store i16 %1, i16* %0
  ret void
}

; [#uses=1]
declare i31 @llvm.part.select.i31(i31, i32, i32) nounwind readnone

; [#uses=0]
declare i31 @_ssdm_op_PartSelect.i31.i37.i32.i32(i37, i32, i32) nounwind readnone

!llvm.map.gv = !{}

!0 = metadata !{metadata !1}
!1 = metadata !{i32 0, i32 15, metadata !2}
!2 = metadata !{metadata !3}
!3 = metadata !{metadata !"y", metadata !4, metadata !"short"}
!4 = metadata !{metadata !5}
!5 = metadata !{i32 0, i32 0, i32 1}
!6 = metadata !{metadata !7}
!7 = metadata !{i32 0, i32 15, metadata !8}
!8 = metadata !{metadata !9}
!9 = metadata !{metadata !"x", metadata !10, metadata !"short"}
!10 = metadata !{metadata !11}
!11 = metadata !{i32 0, i32 0, i32 0}
!12 = metadata !{i32 786689, metadata !13, metadata !"x", metadata !14, i32 33554437, metadata !18, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!13 = metadata !{i32 786478, i32 0, metadata !14, metadata !"fir", metadata !"fir", metadata !"", metadata !14, i32 3, metadata !15, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (i16*, i16)* @fir, null, null, metadata !20, i32 6} ; [ DW_TAG_subprogram ]
!14 = metadata !{i32 786473, metadata !"fir.c", metadata !"/home/student/tjp79/classes/ece5775/audio_lab", null} ; [ DW_TAG_file_type ]
!15 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !16, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!16 = metadata !{null, metadata !17, metadata !18}
!17 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !18} ; [ DW_TAG_pointer_type ]
!18 = metadata !{i32 786454, null, metadata !"data_t", metadata !14, i32 7, i64 0, i64 0, i64 0, i32 0, metadata !19} ; [ DW_TAG_typedef ]
!19 = metadata !{i32 786468, null, metadata !"short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!20 = metadata !{metadata !21}
!21 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!22 = metadata !{i32 5, i32 10, metadata !13, null}
!23 = metadata !{i32 786689, metadata !13, metadata !"y", metadata !14, i32 16777220, metadata !17, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!24 = metadata !{i32 4, i32 11, metadata !13, null}
!25 = metadata !{i32 7, i32 1, metadata !26, null}
!26 = metadata !{i32 786443, metadata !13, i32 6, i32 5, metadata !14, i32 0} ; [ DW_TAG_lexical_block ]
!27 = metadata !{i32 16, i32 3, metadata !26, null}
!28 = metadata !{i32 786688, metadata !26, metadata !"acc", metadata !14, i32 13, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!29 = metadata !{i32 786454, null, metadata !"acc_t", metadata !14, i32 8, i64 0, i64 0, i64 0, i32 0, metadata !30} ; [ DW_TAG_typedef ]
!30 = metadata !{i32 786454, null, metadata !"int38", metadata !14, i32 40, i64 0, i64 0, i64 0, i32 0, metadata !31} ; [ DW_TAG_typedef ]
!31 = metadata !{i32 786468, null, metadata !"int38", null, i32 0, i64 38, i64 64, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!32 = metadata !{i32 17, i32 14, metadata !33, null}
!33 = metadata !{i32 786443, metadata !26, i32 17, i32 9, metadata !14, i32 1} ; [ DW_TAG_lexical_block ]
!34 = metadata !{i32 17, i32 33, metadata !35, null}
!35 = metadata !{i32 786443, metadata !33, i32 17, i32 32, metadata !14, i32 2} ; [ DW_TAG_lexical_block ]
!36 = metadata !{i32 17, i32 63, metadata !35, null}
!37 = metadata !{i32 18, i32 1, metadata !35, null}
!38 = metadata !{i32 18, i32 5, metadata !35, null}
!39 = metadata !{i32 19, i32 5, metadata !35, null}
!40 = metadata !{i32 20, i32 3, metadata !35, null}
!41 = metadata !{i32 786688, metadata !26, metadata !"i", metadata !14, i32 14, metadata !42, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!42 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!43 = metadata !{i32 17, i32 27, metadata !33, null}
!44 = metadata !{i32 21, i32 3, metadata !26, null}
!45 = metadata !{i32 22, i32 3, metadata !26, null}
!46 = metadata !{i32 23, i32 3, metadata !26, null}
!47 = metadata !{i32 24, i32 1, metadata !26, null}
