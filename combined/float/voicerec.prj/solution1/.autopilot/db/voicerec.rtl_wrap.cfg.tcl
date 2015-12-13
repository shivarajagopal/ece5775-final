set lang "C++"
set moduleName "voicerec"
set moduleIsExternC "0"
set rawDecl ""
set globalVariable ""
set PortName0 "result"
set BitWidth0 "28224"
set ArrayOpt0 ""
set Const0 "0"
set Volatile0 "0"
set Pointer0 "0"
set Reference0 "0"
set Initializer0 ""
set External0 0
set Dims0 [list  63 14]
set Interface0 "wire"
set DataType0 "float"
set Port0 [list $PortName0 $Interface0 $DataType0 $Pointer0 $Dims0 $Const0 $Volatile0 $ArrayOpt0 $Initializer0 $External0]
lappend globalVariable $Port0
set PortName1 "c"
set BitWidth1 "16384"
set ArrayOpt1 ""
set Const1 "0"
set Volatile1 "0"
set Pointer1 "0"
set Reference1 "0"
set Initializer1 ""
set External1 0
set Dims1 [list  512]
set Interface1 "wire"
set DataType1 "float"
set Port1 [list $PortName1 $Interface1 $DataType1 $Pointer1 $Dims1 $Const1 $Volatile1 $ArrayOpt1 $Initializer1 $External1]
lappend globalVariable $Port1
set PortName2 "spec"
set BitWidth2 "8192"
set ArrayOpt2 ""
set Const2 "0"
set Volatile2 "0"
set Pointer2 "0"
set Reference2 "0"
set Initializer2 ""
set External2 0
set Dims2 [list  256]
set Interface2 "wire"
set DataType2 "float"
set Port2 [list $PortName2 $Interface2 $DataType2 $Pointer2 $Dims2 $Const2 $Volatile2 $ArrayOpt2 $Initializer2 $External2]
lappend globalVariable $Port2
set PortName3 "e"
set BitWidth3 "832"
set ArrayOpt3 ""
set Const3 "0"
set Volatile3 "0"
set Pointer3 "0"
set Reference3 "0"
set Initializer3 ""
set External3 0
set Dims3 [list  26]
set Interface3 "wire"
set DataType3 "float"
set Port3 [list $PortName3 $Interface3 $DataType3 $Pointer3 $Dims3 $Const3 $Volatile3 $ArrayOpt3 $Initializer3 $External3]
lappend globalVariable $Port3
set PortName4 "begins"
set BitWidth4 "2560"
set ArrayOpt4 ""
set Const4 "0"
set Volatile4 "0"
set Pointer4 "0"
set Reference4 "0"
set Initializer4 ""
set External4 0
set Dims4 [list  80]
set Interface4 "wire"
set DataType4 "int"
set Port4 [list $PortName4 $Interface4 $DataType4 $Pointer4 $Dims4 $Const4 $Volatile4 $ArrayOpt4 $Initializer4 $External4]
lappend globalVariable $Port4
set PortName5 "ends"
set BitWidth5 "2560"
set ArrayOpt5 ""
set Const5 "0"
set Volatile5 "0"
set Pointer5 "0"
set Reference5 "0"
set Initializer5 ""
set External5 0
set Dims5 [list  80]
set Interface5 "wire"
set DataType5 "int"
set Port5 [list $PortName5 $Interface5 $DataType5 $Pointer5 $Dims5 $Const5 $Volatile5 $ArrayOpt5 $Initializer5 $External5]
lappend globalVariable $Port5
set PortName6 "input"
set BitWidth6 "28256"
set ArrayOpt6 ""
set Const6 "0"
set Volatile6 "0"
set Pointer6 "0"
set Reference6 "0"
set Initializer6 ""
set External6 0
set Dims6 [list  883]
set Interface6 "wire"
set DataType6 "float"
set Port6 [list $PortName6 $Interface6 $DataType6 $Pointer6 $Dims6 $Const6 $Volatile6 $ArrayOpt6 $Initializer6 $External6]
lappend globalVariable $Port6
set PortName7 "hidden"
set BitWidth7 "832"
set ArrayOpt7 ""
set Const7 "0"
set Volatile7 "0"
set Pointer7 "0"
set Reference7 "0"
set Initializer7 ""
set External7 0
set Dims7 [list  26]
set Interface7 "wire"
set DataType7 "float"
set Port7 [list $PortName7 $Interface7 $DataType7 $Pointer7 $Dims7 $Const7 $Volatile7 $ArrayOpt7 $Initializer7 $External7]
lappend globalVariable $Port7
set PortName8 "output"
set BitWidth8 "128"
set ArrayOpt8 ""
set Const8 "0"
set Volatile8 "0"
set Pointer8 "0"
set Reference8 "0"
set Initializer8 ""
set External8 0
set Dims8 [list  4]
set Interface8 "wire"
set DataType8 "float"
set Port8 [list $PortName8 $Interface8 $DataType8 $Pointer8 $Dims8 $Const8 $Volatile8 $ArrayOpt8 $Initializer8 $External8]
lappend globalVariable $Port8
set PortList ""
set PortName9 "new_sample"
set BitWidth9 "64"
set ArrayOpt9 ""
set Const9 "0"
set Volatile9 "0"
set Pointer9 "1"
set Reference9 "0"
set Dims9 [list 0]
set Interface9 "wire"
set DataType9 "float"
set Port9 [list $PortName9 $Interface9 $DataType9 $Pointer9 $Dims9 $Const9 $Volatile9 $ArrayOpt9]
lappend PortList $Port9
set PortName10 "return"
set BitWidth10 "32"
set ArrayOpt10 ""
set Const10 "0"
set Volatile10 "0"
set Pointer10 "0"
set Reference10 "0"
set Dims10 [list 0]
set Interface10 "wire"
set DataType10 "int"
set Port10 [list $PortName10 $Interface10 $DataType10 $Pointer10 $Dims10 $Const10 $Volatile10 $ArrayOpt10]
lappend PortList $Port10
set globalAPint "" 
set returnAPInt "" 
set hasCPPAPInt 0 
set argAPInt "" 
set hasCPPAPFix 0 
set hasSCFix 0 
set hasCBool 0 
set hasCPPComplex 0 
set isTemplateTop 0
set dataPackList ""
set module [list $moduleName $PortList $rawDecl $argAPInt $returnAPInt $dataPackList]
