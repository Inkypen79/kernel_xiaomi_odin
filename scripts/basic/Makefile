# SPDX-License-Identifier: GPL-2.0-only
#
# fixdep: used to generate dependency information during build process

hostprogs-y	:= fixdep
hostprogs-y	+= cc-wrapper
$(obj)/cc-wrapper: $(obj)/fixdep

always		:= $(hostprogs-y)
