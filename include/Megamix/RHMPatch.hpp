#ifndef RHMPATCH_H
#define RHMPATCH_H

#include "Config.hpp"

namespace Megamix {
    extern char* rhmpatchBuffer;
    int LoadC00Bin(const std::string &path="_:/spicerack/C00.bin");
    void PatchTickflowAddresses(Config config);
}

#endif