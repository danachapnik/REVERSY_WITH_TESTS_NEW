/*
 * RemoteNetworkPlayer.h
 *
 *  Created on: Dec 1, 2017
 *      Author: dana
 */

#ifndef REMOTENETWORKPLAYER_H_
#define REMOTENETWORKPLAYER_H_

#include "IPlayer.h"
#include "Socket.h"


class RemoteNetworkPlayer: public IPlayer {
public:
    /**
     * constractor.
     * @param player_type
     * @param socket
     */
	RemoteNetworkPlayer(const PlayerTypes player_type, Socket* socket);
    /**
     * get the move.
     * @param rules.
     * @param board.
     * @return the point.
     */
	virtual Point get_move(const IRules& rules, const Board& board);

private:
	Socket* m_socket;
};

#endif /* REMOTENETWORKPLAYER_H_ */
