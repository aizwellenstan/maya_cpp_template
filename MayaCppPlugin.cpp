#include <maya/MfnPlugin.h>
#include <maya/MGlobal.h>
#include <maya/MSimple.h>

DeclareSimpleCommand(BatchConvertMocap, "aizwellenstan", "1.0");

MStatus BatchConvertMocap::doIt(const MArgList& args)
{
	MStatus stat = MS::kSuccess;
	char Hello[] = "\n Hello World\nMaya C++\n";
	cout << Hello << endl;
	MGlobal::displayInfo(Hello);
	return stat;
}
