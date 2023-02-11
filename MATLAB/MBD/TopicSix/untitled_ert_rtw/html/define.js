function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:41,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:78,type:"fcn"};
this.def["untitled_M_"] = {file: "untitled_c.html",line:28,type:"var"};
this.def["untitled_M"] = {file: "untitled_c.html",line:29,type:"var"};
this.def["untitled_step"] = {file: "untitled_c.html",line:32,type:"fcn"};
this.def["untitled_initialize"] = {file: "untitled_c.html",line:44,type:"fcn"};
this.def["untitled_terminate"] = {file: "untitled_c.html",line:53,type:"fcn"};
this.def["RT_MODEL_untitled_T"] = {file: "untitled_types_h.html",line:28,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:57,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:58,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:59,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:71,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:72,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:73,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:74,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:75,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:76,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:86,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:91,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:96,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:103,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:110,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:117,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:124,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:131,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:138,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:156,type:"type"};
this.def["LED_TurnOn"] = {file: "LED_c.html",line:3,type:"fcn"};
this.def["LED_TurnOFF"] = {file: "LED_c.html",line:7,type:"fcn"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["untitled_c.html"] = "../untitled.c";
	this.html2Root["untitled_c.html"] = "untitled_c.html";
	this.html2SrcPath["untitled_h.html"] = "../untitled.h";
	this.html2Root["untitled_h.html"] = "untitled_h.html";
	this.html2SrcPath["untitled_private_h.html"] = "../untitled_private.h";
	this.html2Root["untitled_private_h.html"] = "untitled_private_h.html";
	this.html2SrcPath["untitled_types_h.html"] = "../untitled_types.h";
	this.html2Root["untitled_types_h.html"] = "untitled_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.html2SrcPath["LED_c.html"] = "../../LED.c";
	this.html2Root["LED_c.html"] = "LED_c.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","untitled_c.html","untitled_h.html","untitled_private_h.html","untitled_types_h.html","rtwtypes_h.html","LED_c.html"];
