// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.
//
// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, MIMI Money Project
//
// Please see the included LICENSE file for more information.


#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
            
{       0, "1b7ec2d6847638d4071a94f4516c0f46a0b21d9a8bd9242ef71ae9b0fe909ea5"},
{   10000, "5d7fceda0cd676f65e1ceeaebcbfc0e4a8afc49b765c0a888863816b1429cc60"},
{   20000, "57198fef17d0983fb6152f27dd0528ed81917699a371c04fd1889049464ab1b2"},
{   30000, "e44e7f486d11fde2aaf0d7774172d55adb3bee4208e18fc3cb73e016d9edf49c"},
{   40000, "6a14eb26a150f87499a1c09fa4ada782ca8c4b3a7107b74f31afc2e440cbf7fa"},
{   50000, "231b8987de30160337c67a2738d97e98287f956ccee9a9afa32a3000842284a1"},
{   60000, "ac88ac94ad3716557397fb0a35995e285bcf78a3653fe5fbb6850d56c85c31ef"},
{   70000, "ddc21274b9ca3b48e49022f5e0925744d102d8851820a83a30097e44b12bfb8b"},
{   80000, "b15325b23522060d91eceb50b769b6d5ec4355f3c721b0de202bce17f6fb3525"},
{   90000, "45d4a61cbd4821dc31aab9d216c07ef207ecbffd145ec5a41a3e7660c421c1b8"},
{   100000, "8650ed928817f449462269e02001ef69cd270a587aa7d9efc17b4c7add1ddc6f"},
{   110000, "e3a41708ab8c72875a484356aa2fa97550fdd8fd97b88d5f0b7f211085a9bd98"},
{   120000, "b10294181e9b0579cfeb50da7c5d05c8687cf5002c736bd547ddd3ca76b0c134"},
{   130000, "f7192ac10887ac8bc5e08c23f56919a9deb19389ea4a70ed21fa79e2321cfee2"},
{   140000, "2075a026efffefab4357bdb8673d3317312745de5aacf38d981bf081478f4ade"},
{   150000, "0df11605300245ae9c89beb49d231edbcedca2094a413a7e04206036e6283c4d"},
{   160000, "d22986b1a10206b254dafb1922bb643b466714a611acef7cdb09471e081c6e00"},
{   170000, "35968d0e2a36ad8814113db959076bda68c0e573421eb7d9c5a27deb17cbd52a"},
{   180000, "d884487d1037b951ebd6a0669b00648b0d4804ffdeb465c183a5f0cb75a33851"}
};
}
