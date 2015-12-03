; ModuleID = '/home/student/tjp79/classes/ece5775/audio_lab/audio.prj/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@p_str = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1
@p_str1 = private unnamed_addr constant [7 x i8] c"fir_io\00", align 1
@p_str2 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@c = internal unnamed_addr constant [59 x i16] [i16 -378, i16 -73, i16 27, i16 170, i16 298, i16 352, i16 302, i16 168, i16 14, i16 -80, i16 -64, i16 53, i16 186, i16 216, i16 40, i16 -356, i16 -867, i16 -1283, i16 -1366, i16 -954, i16 -51, i16 1132, i16 2227, i16 2829, i16 2647, i16 1633, i16 25, i16 -1712, i16 -3042, i16 29229, i16 -3042, i16 -1712, i16 25, i16 1633, i16 2647, i16 2829, i16 2227, i16 1132, i16 -51, i16 -954, i16 -1366, i16 -1283, i16 -867, i16 -356, i16 40, i16 216, i16 186, i16 53, i16 -64, i16 -80, i16 14, i16 168, i16 302, i16 352, i16 298, i16 170, i16 27, i16 -73, i16 -378], align 16
@shift_reg = internal unnamed_addr global [58 x i16] zeroinitializer, align 16
@p_str3 = private unnamed_addr constant [5 x i8] c"loop\00", align 1
@str = internal constant [4 x i8] c"fir\00"

define void @fir(i16* %y, i16 signext %x) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap(i16* %y) nounwind, !map !0
  call void (...)* @_ssdm_op_SpecBitsMap(i16 %x) nounwind, !map !6
  call void (...)* @_ssdm_op_SpecTopModule([4 x i8]* @str) nounwind
  %x_read = call i16 @_ssdm_op_Read.ap_auto.i16(i16 %x) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [7 x i8]* @p_str1, [1 x i8]* @p_str2, [1 x i8]* @p_str2) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i16* %y, [10 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [7 x i8]* @p_str1, [1 x i8]* @p_str2, [1 x i8]* @p_str2) nounwind
  call void (...)* @_ssdm_op_SpecInterface(i16 %x, [10 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [7 x i8]* @p_str1, [1 x i8]* @p_str2, [1 x i8]* @p_str2) nounwind
  %shift_reg_load = load i16* getelementptr inbounds ([58 x i16]* @shift_reg, i64 0, i64 57), align 2
  %tmp_1_cast = sext i16 %shift_reg_load to i26
  %acc = mul i26 %tmp_1_cast, -378
  %acc_cast = sext i26 %acc to i37
  br label %1

; <label>:1                                       ; preds = %2, %0
  %acc1 = phi i37 [ %acc_cast, %0 ], [ %acc_2, %2 ]
  %i = phi i6 [ -7, %0 ], [ %i_1, %2 ]
  %tmp_2 = trunc i37 %acc1 to i31
  %tmp_3 = icmp eq i6 %i, 0
  br i1 %tmp_3, label %3, label %2

; <label>:2                                       ; preds = %1
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 57, i64 57, i64 57) nounwind
  call void (...)* @_ssdm_op_SpecLoopName([5 x i8]* @p_str3) nounwind
  %tmp = call i32 (...)* @_ssdm_op_SpecRegionBegin([5 x i8]* @p_str3) nounwind
  call void (...)* @_ssdm_op_SpecPipeline(i32 1, i32 1, i32 1, i32 0, [1 x i8]* @p_str2) nounwind
  %i_1 = add i6 %i, -1
  %tmp_s = zext i6 %i_1 to i64
  %shift_reg_addr = getelementptr inbounds [58 x i16]* @shift_reg, i64 0, i64 %tmp_s
  %shift_reg_load_1 = load i16* %shift_reg_addr, align 2
  %tmp_2_cast = sext i16 %shift_reg_load_1 to i32
  %tmp_6 = zext i6 %i to i64
  %c_addr = getelementptr inbounds [59 x i16]* @c, i64 0, i64 %tmp_6
  %c_load = load i16* %c_addr, align 2
  %tmp_9_cast = sext i16 %c_load to i32
  %tmp_1 = mul i32 %tmp_9_cast, %tmp_2_cast
  %tmp_10_cast = sext i32 %tmp_1 to i37
  %acc_2 = add i37 %tmp_10_cast, %acc1
  %shift_reg_addr_1 = getelementptr inbounds [58 x i16]* @shift_reg, i64 0, i64 %tmp_6
  store i16 %shift_reg_load_1, i16* %shift_reg_addr_1, align 2
  %empty_4 = call i32 (...)* @_ssdm_op_SpecRegionEnd([5 x i8]* @p_str3, i32 %tmp) nounwind
  br label %1

; <label>:3                                       ; preds = %1
  %tmp_4_cast = sext i16 %x_read to i26
  %tmp_5 = mul i26 %tmp_4_cast, -378
  %tmp_5_cast = sext i26 %tmp_5 to i31
  %acc_1 = add i31 %tmp_2, %tmp_5_cast
  store i16 %x_read, i16* getelementptr inbounds ([58 x i16]* @shift_reg, i64 0, i64 0), align 16
  %tmp_8 = call i16 @_ssdm_op_PartSelect.i16.i31.i32.i32(i31 %acc_1, i32 15, i32 30)
  call void @_ssdm_op_Write.ap_auto.i16P(i16* %y, i16 %tmp_8) nounwind
  ret void
}

define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak i16 @_ssdm_op_PartSelect.i16.i31.i32.i32(i31, i32, i32) nounwind readnone {
entry:
  %empty = call i31 @llvm.part.select.i31(i31 %0, i32 %1, i32 %2)
  %empty_5 = trunc i31 %empty to i16
  ret i16 %empty_5
}

define weak i16 @_ssdm_op_Read.ap_auto.i16(i16) {
entry:
  ret i16 %0
}

define weak void @_ssdm_op_Write.ap_auto.i16P(i16*, i16) {
entry:
  store i16 %1, i16* %0
  ret void
}

declare i31 @llvm.part.select.i31(i31, i32, i32) nounwind readnone

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
