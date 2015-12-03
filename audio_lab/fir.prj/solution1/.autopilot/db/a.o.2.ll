; ModuleID = '/home/student/tjp79/classes/ece5775/audio_lab/audio.prj/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@.str = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1 ; [#uses=3 type=[10 x i8]*]
@.str1 = private unnamed_addr constant [7 x i8] c"fir_io\00", align 1 ; [#uses=3 type=[7 x i8]*]
@.str2 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=7 type=[1 x i8]*]
@c = internal unnamed_addr constant [59 x i16] [i16 -378, i16 -73, i16 27, i16 170, i16 298, i16 352, i16 302, i16 168, i16 14, i16 -80, i16 -64, i16 53, i16 186, i16 216, i16 40, i16 -356, i16 -867, i16 -1283, i16 -1366, i16 -954, i16 -51, i16 1132, i16 2227, i16 2829, i16 2647, i16 1633, i16 25, i16 -1712, i16 -3042, i16 29229, i16 -3042, i16 -1712, i16 25, i16 1633, i16 2647, i16 2829, i16 2227, i16 1132, i16 -51, i16 -954, i16 -1366, i16 -1283, i16 -867, i16 -356, i16 40, i16 216, i16 186, i16 53, i16 -64, i16 -80, i16 14, i16 168, i16 302, i16 352, i16 298, i16 170, i16 27, i16 -73, i16 -378], align 16 ; [#uses=1 type=[59 x i16]*]
@shift_reg = internal unnamed_addr global [58 x i16] zeroinitializer, align 16 ; [#uses=4 type=[58 x i16]*]
@.str3 = private unnamed_addr constant [5 x i8] c"loop\00", align 1 ; [#uses=3 type=[5 x i8]*]
@str = internal constant [4 x i8] c"fir\00"       ; [#uses=1 type=[4 x i8]*]

; [#uses=0]
define void @fir(i16* %y, i16 signext %x) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap(i16* %y) nounwind, !map !30
  call void (...)* @_ssdm_op_SpecBitsMap(i16 %x) nounwind, !map !36
  call void (...)* @_ssdm_op_SpecTopModule([4 x i8]* @str) nounwind
  call void @llvm.dbg.value(metadata !{i16* %y}, i64 0, metadata !42), !dbg !43 ; [debug line = 4:11] [debug variable = y]
  call void @llvm.dbg.value(metadata !{i16 %x}, i64 0, metadata !44), !dbg !45 ; [debug line = 5:10] [debug variable = x]
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @.str, i32 0, i32 0, i32 0, i32 0, [7 x i8]* @.str1, [1 x i8]* @.str2, [1 x i8]* @.str2) nounwind, !dbg !46 ; [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface(i16* %y, [10 x i8]* @.str, i32 0, i32 0, i32 0, i32 0, [7 x i8]* @.str1, [1 x i8]* @.str2, [1 x i8]* @.str2) nounwind, !dbg !46 ; [debug line = 7:1]
  call void (...)* @_ssdm_op_SpecInterface(i16 %x, [10 x i8]* @.str, i32 0, i32 0, i32 0, i32 0, [7 x i8]* @.str1, [1 x i8]* @.str2, [1 x i8]* @.str2) nounwind, !dbg !46 ; [debug line = 7:1]
  %shift_reg.load = load i16* getelementptr inbounds ([58 x i16]* @shift_reg, i64 0, i64 57), align 2, !dbg !48 ; [#uses=1 type=i16] [debug line = 16:3]
  %tmp.1.cast = sext i16 %shift_reg.load to i26, !dbg !48 ; [#uses=1 type=i26] [debug line = 16:3]
  %acc = mul i26 %tmp.1.cast, -378, !dbg !48      ; [#uses=1 type=i26] [debug line = 16:3]
  %acc.cast = sext i26 %acc to i37, !dbg !48      ; [#uses=1 type=i37] [debug line = 16:3]
  call void @llvm.dbg.value(metadata !{i26 %acc}, i64 0, metadata !49), !dbg !48 ; [debug line = 16:3] [debug variable = acc]
  br label %1, !dbg !53                           ; [debug line = 17:14]

; <label>:1                                       ; preds = %3, %0
  %acc1 = phi i37 [ %acc.cast, %0 ], [ %acc.2, %3 ] ; [#uses=2 type=i37]
  %i = phi i6 [ -7, %0 ], [ %i.1, %3 ]            ; [#uses=3 type=i6]
  %acc1.cast = trunc i37 %acc1 to i31, !dbg !53   ; [#uses=1 type=i31] [debug line = 17:14]
  %tmp.3 = icmp eq i6 %i, 0, !dbg !53             ; [#uses=1 type=i1] [debug line = 17:14]
  %2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 57, i64 57, i64 57) nounwind ; [#uses=0 type=i32]
  br i1 %tmp.3, label %5, label %3, !dbg !53      ; [debug line = 17:14]

; <label>:3                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName([5 x i8]* @.str3) nounwind, !dbg !55 ; [debug line = 17:33]
  %tmp = call i32 (...)* @_ssdm_op_SpecRegionBegin([5 x i8]* @.str3) nounwind, !dbg !57 ; [#uses=1 type=i32] [debug line = 17:63]
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @.str2) nounwind, !dbg !58 ; [debug line = 18:1]
  %i.1 = add i6 %i, -1, !dbg !59                  ; [#uses=2 type=i6] [debug line = 18:5]
  %tmp. = zext i6 %i.1 to i64, !dbg !59           ; [#uses=1 type=i64] [debug line = 18:5]
  %shift_reg.addr = getelementptr inbounds [58 x i16]* @shift_reg, i64 0, i64 %tmp., !dbg !59 ; [#uses=1 type=i16*] [debug line = 18:5]
  %shift_reg.load.1 = load i16* %shift_reg.addr, align 2, !dbg !59 ; [#uses=2 type=i16] [debug line = 18:5]
  %tmp.2.cast = sext i16 %shift_reg.load.1 to i32, !dbg !59 ; [#uses=1 type=i32] [debug line = 18:5]
  %tmp.6 = zext i6 %i to i64, !dbg !59            ; [#uses=2 type=i64] [debug line = 18:5]
  %c.addr = getelementptr inbounds [59 x i16]* @c, i64 0, i64 %tmp.6, !dbg !59 ; [#uses=1 type=i16*] [debug line = 18:5]
  %c.load = load i16* %c.addr, align 2, !dbg !59  ; [#uses=1 type=i16] [debug line = 18:5]
  %tmp.9.cast = sext i16 %c.load to i32, !dbg !59 ; [#uses=1 type=i32] [debug line = 18:5]
  %tmp.1 = mul i32 %tmp.9.cast, %tmp.2.cast, !dbg !59 ; [#uses=1 type=i32] [debug line = 18:5]
  %tmp.10.cast = sext i32 %tmp.1 to i37, !dbg !59 ; [#uses=1 type=i37] [debug line = 18:5]
  %acc.2 = add i37 %tmp.10.cast, %acc1, !dbg !59  ; [#uses=1 type=i37] [debug line = 18:5]
  call void @llvm.dbg.value(metadata !{i37 %acc.2}, i64 0, metadata !49), !dbg !59 ; [debug line = 18:5] [debug variable = acc]
  %shift_reg.addr.1 = getelementptr inbounds [58 x i16]* @shift_reg, i64 0, i64 %tmp.6, !dbg !60 ; [#uses=1 type=i16*] [debug line = 19:5]
  store i16 %shift_reg.load.1, i16* %shift_reg.addr.1, align 2, !dbg !60 ; [debug line = 19:5]
  %4 = call i32 (...)* @_ssdm_op_SpecRegionEnd([5 x i8]* @.str3, i32 %tmp) nounwind, !dbg !61 ; [#uses=0 type=i32] [debug line = 20:3]
  call void @llvm.dbg.value(metadata !{i6 %i.1}, i64 0, metadata !62), !dbg !63 ; [debug line = 17:27] [debug variable = i]
  br label %1, !dbg !63                           ; [debug line = 17:27]

; <label>:5                                       ; preds = %1
  %acc1.cast.lcssa = phi i31 [ %acc1.cast, %1 ]   ; [#uses=1 type=i31]
  %tmp.4.cast = sext i16 %x to i26, !dbg !64      ; [#uses=1 type=i26] [debug line = 21:3]
  %tmp.5 = mul i26 %tmp.4.cast, -378, !dbg !64    ; [#uses=1 type=i26] [debug line = 21:3]
  %tmp.5.cast = sext i26 %tmp.5 to i31, !dbg !64  ; [#uses=1 type=i31] [debug line = 21:3]
  %acc.1 = add i31 %acc1.cast.lcssa, %tmp.5.cast, !dbg !64 ; [#uses=1 type=i31] [debug line = 21:3]
  call void @llvm.dbg.value(metadata !{i31 %acc.1}, i64 0, metadata !49), !dbg !64 ; [debug line = 21:3] [debug variable = acc]
  store i16 %x, i16* getelementptr inbounds ([58 x i16]* @shift_reg, i64 0, i64 0), align 16, !dbg !65 ; [debug line = 22:3]
  %tmp.7 = lshr i31 %acc.1, 15, !dbg !66          ; [#uses=1 type=i31] [debug line = 23:3]
  %tmp.8 = trunc i31 %tmp.7 to i16, !dbg !66      ; [#uses=1 type=i16] [debug line = 23:3]
  store i16 %tmp.8, i16* %y, align 2, !dbg !66    ; [debug line = 23:3]
  ret void, !dbg !67                              ; [debug line = 24:1]
}

; [#uses=3]
declare void @_ssdm_op_SpecInterface(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecLoopName(...) nounwind

; [#uses=1]
declare void @_ssdm_op_SpecPipeline(...) nounwind

; [#uses=6]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=1]
declare void @_ssdm_op_SpecTopModule(...)

; [#uses=1]
declare i32 @_ssdm_op_SpecRegionBegin(...)

; [#uses=1]
declare i32 @_ssdm_op_SpecRegionEnd(...)

; [#uses=2]
declare void @_ssdm_op_SpecBitsMap(...)

; [#uses=1]
declare i32 @_ssdm_op_SpecLoopTripCount(...)

!llvm.map.gv = !{}
!llvm.dbg.cu = !{!0}

!0 = metadata !{i32 786449, i32 0, i32 1, metadata !"/home/student/tjp79/classes/ece5775/audio_lab/audio.prj/solution1/.autopilot/db/fir.pragma.2.c", metadata !"/home/student/tjp79/classes/ece5775/audio_lab", metadata !"clang version 3.1 ", i1 true, i1 false, metadata !"", i32 0, null, null, null, metadata !1} ; [ DW_TAG_compile_unit ]
!1 = metadata !{metadata !2}
!2 = metadata !{metadata !3, metadata !18, metadata !22, metadata !25, metadata !26, metadata !27}
!3 = metadata !{i32 786484, i32 0, metadata !4, metadata !"c", metadata !"c", metadata !"", metadata !5, i32 7, metadata !13, i32 1, i32 1, [59 x i16]* @c} ; [ DW_TAG_variable ]
!4 = metadata !{i32 786478, i32 0, metadata !5, metadata !"fir", metadata !"fir", metadata !"", metadata !5, i32 3, metadata !6, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, void (i16*, i16)* @fir, null, null, metadata !11, i32 6} ; [ DW_TAG_subprogram ]
!5 = metadata !{i32 786473, metadata !"fir.c", metadata !"/home/student/tjp79/classes/ece5775/audio_lab", null} ; [ DW_TAG_file_type ]
!6 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !7, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!7 = metadata !{null, metadata !8, metadata !9}
!8 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !9} ; [ DW_TAG_pointer_type ]
!9 = metadata !{i32 786454, null, metadata !"data_t", metadata !5, i32 7, i64 0, i64 0, i64 0, i32 0, metadata !10} ; [ DW_TAG_typedef ]
!10 = metadata !{i32 786468, null, metadata !"short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!11 = metadata !{metadata !12}
!12 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!13 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 944, i64 16, i32 0, i32 0, metadata !14, metadata !16, i32 0, i32 0} ; [ DW_TAG_array_type ]
!14 = metadata !{i32 786470, null, metadata !"", null, i32 0, i64 0, i64 0, i64 0, i32 0, metadata !15} ; [ DW_TAG_const_type ]
!15 = metadata !{i32 786454, null, metadata !"coef_t", metadata !5, i32 6, i64 0, i64 0, i64 0, i32 0, metadata !10} ; [ DW_TAG_typedef ]
!16 = metadata !{metadata !17}
!17 = metadata !{i32 786465, i64 0, i64 58}       ; [ DW_TAG_subrange_type ]
!18 = metadata !{i32 786484, i32 0, metadata !4, metadata !"shift_reg", metadata !"shift_reg", metadata !"", metadata !5, i32 12, metadata !19, i32 1, i32 1, [58 x i16]* @shift_reg} ; [ DW_TAG_variable ]
!19 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 928, i64 16, i32 0, i32 0, metadata !9, metadata !20, i32 0, i32 0} ; [ DW_TAG_array_type ]
!20 = metadata !{metadata !21}
!21 = metadata !{i32 786465, i64 0, i64 57}       ; [ DW_TAG_subrange_type ]
!22 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stdin_", metadata !"_IO_2_1_stdin_", metadata !"", metadata !23, i32 343, metadata !24, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!23 = metadata !{i32 786473, metadata !"/usr/include/libio.h", metadata !"/home/student/tjp79/classes/ece5775/audio_lab", null} ; [ DW_TAG_file_type ]
!24 = metadata !{i32 786451, null, metadata !"_IO_FILE_plus", metadata !23, i32 341, i32 0, i32 0, i32 0, i32 4, null, null, i32 0} ; [ DW_TAG_structure_type ]
!25 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stdout_", metadata !"_IO_2_1_stdout_", metadata !"", metadata !23, i32 344, metadata !24, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!26 = metadata !{i32 786484, i32 0, null, metadata !"_IO_2_1_stderr_", metadata !"_IO_2_1_stderr_", metadata !"", metadata !23, i32 345, metadata !24, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!27 = metadata !{i32 786484, i32 0, null, metadata !"sys_nerr", metadata !"sys_nerr", metadata !"", metadata !28, i32 27, metadata !29, i32 0, i32 1, null} ; [ DW_TAG_variable ]
!28 = metadata !{i32 786473, metadata !"/usr/include/bits/sys_errlist.h", metadata !"/home/student/tjp79/classes/ece5775/audio_lab", null} ; [ DW_TAG_file_type ]
!29 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!30 = metadata !{metadata !31}
!31 = metadata !{i32 0, i32 15, metadata !32}
!32 = metadata !{metadata !33}
!33 = metadata !{metadata !"y", metadata !34, metadata !"short"}
!34 = metadata !{metadata !35}
!35 = metadata !{i32 0, i32 0, i32 1}
!36 = metadata !{metadata !37}
!37 = metadata !{i32 0, i32 15, metadata !38}
!38 = metadata !{metadata !39}
!39 = metadata !{metadata !"x", metadata !40, metadata !"short"}
!40 = metadata !{metadata !41}
!41 = metadata !{i32 0, i32 0, i32 0}
!42 = metadata !{i32 786689, metadata !4, metadata !"y", metadata !5, i32 16777220, metadata !8, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!43 = metadata !{i32 4, i32 11, metadata !4, null}
!44 = metadata !{i32 786689, metadata !4, metadata !"x", metadata !5, i32 33554437, metadata !9, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!45 = metadata !{i32 5, i32 10, metadata !4, null}
!46 = metadata !{i32 7, i32 1, metadata !47, null}
!47 = metadata !{i32 786443, metadata !4, i32 6, i32 5, metadata !5, i32 0} ; [ DW_TAG_lexical_block ]
!48 = metadata !{i32 16, i32 3, metadata !47, null}
!49 = metadata !{i32 786688, metadata !47, metadata !"acc", metadata !5, i32 13, metadata !50, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!50 = metadata !{i32 786454, null, metadata !"acc_t", metadata !5, i32 8, i64 0, i64 0, i64 0, i32 0, metadata !51} ; [ DW_TAG_typedef ]
!51 = metadata !{i32 786454, null, metadata !"int38", metadata !5, i32 40, i64 0, i64 0, i64 0, i32 0, metadata !52} ; [ DW_TAG_typedef ]
!52 = metadata !{i32 786468, null, metadata !"int38", null, i32 0, i64 38, i64 64, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!53 = metadata !{i32 17, i32 14, metadata !54, null}
!54 = metadata !{i32 786443, metadata !47, i32 17, i32 9, metadata !5, i32 1} ; [ DW_TAG_lexical_block ]
!55 = metadata !{i32 17, i32 33, metadata !56, null}
!56 = metadata !{i32 786443, metadata !54, i32 17, i32 32, metadata !5, i32 2} ; [ DW_TAG_lexical_block ]
!57 = metadata !{i32 17, i32 63, metadata !56, null}
!58 = metadata !{i32 18, i32 1, metadata !56, null}
!59 = metadata !{i32 18, i32 5, metadata !56, null}
!60 = metadata !{i32 19, i32 5, metadata !56, null}
!61 = metadata !{i32 20, i32 3, metadata !56, null}
!62 = metadata !{i32 786688, metadata !47, metadata !"i", metadata !5, i32 14, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!63 = metadata !{i32 17, i32 27, metadata !54, null}
!64 = metadata !{i32 21, i32 3, metadata !47, null}
!65 = metadata !{i32 22, i32 3, metadata !47, null}
!66 = metadata !{i32 23, i32 3, metadata !47, null}
!67 = metadata !{i32 24, i32 1, metadata !47, null}
