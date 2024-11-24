TERMUX_PKG_HOMEPAGE=https://git.causal.agency/pounce
TERMUX_PKG_DESCRIPTION="A multi-client, TLS-only IRC bouncer"
TERMUX_PKG_LICENSE="GPL-3.0"
TERMUX_PKG_MAINTAINER="@termux"
TERMUX_PKG_VERSION=3.1
TERMUX_PKG_SRCURL=https://git.causal.agency/pounce/snapshot/pounce-${TERMUX_PKG_VERSION}.tar.gz
TERMUX_PKG_SHA256=97f245556b1cc940553fca18f4d7d82692e6c11a30f612415e5e391e5d96604e
TERMUX_PKG_DEPENDS="libcrypt, libretls"
TERMUX_PKG_BUILD_IN_SRC=true
TERMUX_PKG_EXTRA_CONFIGURE_ARGS="
--mandir=$TERMUX_PREFIX/share/man
"
TERMUX_PKG_EXTRA_MAKE_ARGS="all"