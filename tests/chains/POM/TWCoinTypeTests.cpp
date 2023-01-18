// Copyright © 2017-2022 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "TestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWPOMCoinType, TWCoinType) {
    const auto coin = TWCoinTypePOM;
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(coin));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(coin));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(coin));
    const auto chainId = WRAPS(TWCoinTypeChainId(coin));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0x7ea793614a255a000181209628918d89f779a5d9cb23d89bae8422e9313579e4"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(coin, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0xcF5890ac382Edb25c8EEbb4413571e29e3daA221"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(coin, accId.get()));

    assertStringsEqual(id, "pom");
    assertStringsEqual(name, "POM");
    assertStringsEqual(symbol, "POM");
    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(coin), 18);
    ASSERT_EQ(TWCoinTypeBlockchain(coin), TWBlockchainEthereum);
    ASSERT_EQ(TWCoinTypeP2shPrefix(coin), 0x0);
    ASSERT_EQ(TWCoinTypeStaticPrefix(coin), 0x0);
    assertStringsEqual(chainId, "18159");
    assertStringsEqual(txUrl, "https://memescan.io/tx/0x7ea793614a255a000181209628918d89f779a5d9cb23d89bae8422e9313579e4");
    assertStringsEqual(accUrl, "https://memescan.io/address/0xcF5890ac382Edb25c8EEbb4413571e29e3daA221");
}
