#ifndef __ANALYZER_DIFF_H
#define __ANALYZER_DIFF_H
#include "analyzer.h"
#include <stdint.h>

class AnalyzerDiff : public Analyzer
{
public:
	AnalyzerDiff();
	AnalyzerDiff(const unsigned char* data, uint size);
	string analyze();
};

#endif //__ANALYZER_DIFF_H
