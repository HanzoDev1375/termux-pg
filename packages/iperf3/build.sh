TERMUX_PKG_HOMEPAGE=https://github.com/esnet/iperf
TERMUX_PKG_DESCRIPTION="TCP, UDP, and SCTP network bandwidth measurement tool"
TERMUX_PKG_LICENSE="BSD 3-Clause"
TERMUX_PKG_MAINTAINER="@termux"
TERMUX_PKG_VERSION="3.17.1"
TERMUX_PKG_SRCURL=https://github.com/esnet/iperf/releases/download/$TERMUX_PKG_VERSION/iperf-$TERMUX_PKG_VERSION.tar.gz
TERMUX_PKG_SHA256=84404ca8431b595e86c473d8f23d8bb102810001f15feaf610effd3b318788aa
TERMUX_PKG_UPDATE_VERSION_REGEXP="^\d+\.\d+[^ABRabr]*$"
TERMUX_PKG_AUTO_UPDATE=true
TERMUX_PKG_DEPENDS="openssl"
TERMUX_PKG_BREAKS="iperf3-dev"
TERMUX_PKG_REPLACES="iperf3-dev"