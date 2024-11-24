TERMUX_PKG_HOMEPAGE=https://github.com/jbeder/yaml-cpp
TERMUX_PKG_DESCRIPTION="A YAML parser and emitter in C++ matching the YAML 1.2 spec"
TERMUX_PKG_LICENSE="MIT"
TERMUX_PKG_MAINTAINER="@termux"
TERMUX_PKG_VERSION=0.8.0
TERMUX_PKG_SRCURL=https://github.com/jbeder/yaml-cpp/archive/refs/tags/${TERMUX_PKG_VERSION}.tar.gz
TERMUX_PKG_SHA256=fbe74bbdcee21d656715688706da3c8becfd946d92cd44705cc6098bb23b3a16
TERMUX_PKG_AUTO_UPDATE=true
TERMUX_PKG_DEPENDS="libc++"
TERMUX_PKG_EXTRA_CONFIGURE_ARGS="
-DYAML_BUILD_SHARED_LIBS=ON
-DINSTALL_GTEST=OFF
"