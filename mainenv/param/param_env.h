#ifndef __PARAM_ENV_H__
#define __PARAM_ENV_H__

#include "env.h"
#include "tinyxml/tinyxml.h"


/********************************
 * @breif : param load class 
 ********************************/
class CParamEnv:public CEnv
{
	public:
		static CParamEnv* GetInstance();
		static void   ReleaseInstance();
	private:
		CParamEnv();
		virtual ~CParamEnv();
		static CParamEnv* m_cParamEnvIns;
	public:
		void startEnv();
		void stopEnv();

	public:
		void loadXmlConf();
		void loadLogConf();
		void GetPlatformParam(void *param);
	private:
//		FILE* m_paramFd;
		TiXmlElement * m_rootEle;
	
};

#endif // param_env.h
