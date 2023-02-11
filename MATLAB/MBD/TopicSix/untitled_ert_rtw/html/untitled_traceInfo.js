function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/LED */
	this.urlHashMap["untitled:2"] = "untitled.c:34";
	/* <Root>/Switch */
	this.urlHashMap["untitled:1"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=untitled:1";
	/* <S1>:1 */
	this.urlHashMap["untitled:2:1"] = "untitled.c:38";
	/* <S1>:3 */
	this.urlHashMap["untitled:2:3"] = "untitled.c:39";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "untitled"};
	this.sidHashMap["untitled"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "untitled:2"};
	this.sidHashMap["untitled:2"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "untitled:1"};
	this.sidHashMap["untitled:1"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/LED"] = {sid: "untitled:2"};
	this.sidHashMap["untitled:2"] = {rtwname: "<Root>/LED"};
	this.rtwnameHashMap["<Root>/Switch"] = {sid: "untitled:1"};
	this.sidHashMap["untitled:1"] = {rtwname: "<Root>/Switch"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "untitled:2:1"};
	this.sidHashMap["untitled:2:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "untitled:2:3"};
	this.sidHashMap["untitled:2:3"] = {rtwname: "<S1>:3"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
