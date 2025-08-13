#ifndef __ACCEPTHANDLER
#define __ACCEPTHANDLER

namespace	net {

/** 
 *  @brief 货肺款 立加阑 烹焊罐绰 努贰胶
 */
class	CAcceptHandler {
public:
	/** 
	 *  @brief
	 *  @return virtual
	 */
	virtual			~CAcceptHandler() {};

	/** 
	 *  @brief 立加俊 己傍窍看阑 版快 龋免等促.
	 *  @param socket 立加等 家南
	 *  @param ip 立加等 家南狼 IP
	 *  @return virtual void
	 */
	virtual void	OnAccept(SOCKET socket,DWORD ip) = 0;
};

} //end namespace imcServerNet

#endif
