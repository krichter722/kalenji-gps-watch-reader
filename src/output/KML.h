#ifndef _OUTPUT_KML_HPP_
#define _OUTPUT_KML_HPP_

#include "../bom/Session.h"
#include "Output.h"

namespace output
{
	class KML : public FileOutput
	{
		public:
			void dumpContent(std::ostream &out, const Session *session, std::map<std::string, std::string> &configuration) override;
			std::string getName() override { return "KML"; };
			std::string getExt() override { return "kml"; }

		private:
			DECLARE_OUTPUT(KML);
	};
}

#endif
