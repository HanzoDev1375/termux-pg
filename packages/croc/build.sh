TERMUX_PKG_HOMEPAGE=https://github.com/schollz/croc
TERMUX_PKG_DESCRIPTION="Easily and securely send things from one computer to another"
TERMUX_PKG_LICENSE=MIT
TERMUX_PKG_MAINTAINER="@termux"
TERMUX_PKG_VERSION="1:10.1.0"
TERMUX_PKG_SRCURL=https://github.com/schollz/croc/archive/refs/tags/v${TERMUX_PKG_VERSION:2}.tar.gz
TERMUX_PKG_SHA256=0968f28c0d46ff181173ae1613aea5c55757384e3c1358917f78bf0ce595d151
TERMUX_PKG_AUTO_UPDATE=true
TERMUX_PKG_BUILD_IN_SRC=true

termux_step_make() {
	cd $TERMUX_PKG_SRCDIR

	termux_setup_golang

	# See https://github.com/wlynxg/anet?tab=readme-ov-file#how-to-build-with-go-1230-or-later
	# regarding -ldflags=-checklinkname=0:
	go build -ldflags=-checklinkname=0 -o croc -trimpath
}

termux_step_make_install() {
	install -m755 croc $TERMUX_PREFIX/bin/croc
}
