# Ultilitas Linux Clear

# Author: SahrulGunawan
# Codebase : Thunder Linux Power Edition
# Compiler : clang + Static Native Library

# Build Logs
````
┌─[root@localhost]─[sdcard]
└──╼ # cat /etc/os-release
NAME="SahrulOS"
VERSION="2.5"
ID=sahrulos
ID_LIKE=busybox
PRETTY_NAME="SahrulOS 2.5 (Thunder Linux Power Edition)"
VERSION_ID="2.5"
HOME_URL="https://github.com/SahrulGunawan-ID"
SUPPORT_URL="https://github.com/SahrulGunawan-ID"
BUG_REPORT_URL="https://github.com/SahrulGunawan-ID"
BUILD_DATE="28-May-2025"
BUILD_TIME="09:52:00"
ARCHITECTURE="aarch64"
KERNEL_VERSION="4.9.82-perf+ / Local Base System"
┌─[root@localhost]─[sdcard]
└──╼ # clang-thunder -o clear clear.c -static
┌─[root@localhost]─[sdcard]
└──╼ # ls -l clear
-rw-rw----    1 root     9997       3996952 May 28 05:50 clear
┌─[root@localhost]─[sdcard]
└──╼ # strip clear
┌─[root@localhost]─[sdcard]
└──╼ #
````
# System Info
````
* Welcome To Thunder Linux

██╗   ██╗███╗   ███╗    ██╗██████╗
██║   ██║████╗ ████║    ██║██╔══██╗
██║   ██║██╔████╔██║    ██║██║  ██║
╚██╗ ██╔╝██║╚██╔╝██║    ██║██║  ██║
 ╚████╔╝ ██║ ╚═╝ ██║    ██║██████╔╝
  ╚═══╝  ╚═╝     ╚═╝    ╚═╝╚═════╝

System Info :
Thunder Linux Version: 2.5
Kernel: 4.9.82-perf+
Architecture: aarch64

┌─[root@localhost]─[~]
└──╼ # cat /etc/os-release
NAME="SahrulOS"
VERSION="2.5"
ID=sahrulos
ID_LIKE=busybox
PRETTY_NAME="SahrulOS 2.5 (Thunder Linux Power Edition)"
VERSION_ID="2.5"
HOME_URL="https://github.com/SahrulGunawan-ID"
SUPPORT_URL="https://github.com/SahrulGunawan-ID"
BUG_REPORT_URL="https://github.com/SahrulGunawan-ID"
BUILD_DATE="28-May-2025"
BUILD_TIME="09:52:00"
ARCHITECTURE="aarch64"
KERNEL_VERSION="4.9.82-perf+ / Local Base System"
┌─[root@localhost]─[~]
└──╼ # clang-thunder --version
clang version 20.0.0 (https://github.com/llvm/llvm-project.git fed41342a82f5a3a9201819a82bf7a48313e296b)
Target: aarch64-unknown-linux-android
Thread model: posix
InstalledDir: /usr/bin
Build Static SahrulGunawanID at 2025-05-27 06:46:43
┌─[root@localhost]─[~]
└──╼ #
````
