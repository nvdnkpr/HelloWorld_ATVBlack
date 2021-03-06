/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRTransitionControl.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRZoomTransitionControl : BRTransitionControl {
@private
	BRControl *_prerender;	// 48 = 0x30
	BOOL _prerenderAnimation;	// 52 = 0x34
}
@property(assign) BOOL prerenderAnimation;	// G=0x31604625; S=0x31604615; converted property
- (void)_addPrerender;	// 0x31604f65
- (void)_removePrerender;	// 0x31604f05
- (void)_takePrerenderSnapshot;	// 0x31605329
- (void)_updateContentForTransitionState;	// 0x316054f9
- (void)_zoomInCompleted:(id)completed;	// 0x31604ea5
- (void)_zoomOutCompleted:(id)completed;	// 0x31604e45
- (void)dealloc;	// 0x3160508d
- (void)layoutSubcontrols;	// 0x31605265
// converted property getter: - (BOOL)prerenderAnimation;	// 0x31604625
- (void)setContent:(id)content;	// 0x31605031
// converted property setter: - (void)setPrerenderAnimation:(BOOL)animation;	// 0x31604615
- (void)setTransitionedIn:(BOOL)anIn;	// 0x31604fdd
@end

