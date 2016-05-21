// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2016-2020 Empinel
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BLITZ_INIT_H
#define BLITZ_INIT_H

#include "wallet/wallet.h"

namespace boost {
class thread_group;
} // namespace boost

extern CWallet* pwalletMain;
void StartShutdown();
bool ShutdownRequested();
void Shutdown();
bool AppInit2(boost::thread_group& threadGroup);
std::string HelpMessage();
extern bool fOnlyTor;

#endif
