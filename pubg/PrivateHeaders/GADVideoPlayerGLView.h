//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GADVideoRendering.h"
#import "GLKViewDelegate.h"

@class AVPlayer, AVPlayerItemVideoOutput, CADisplayLink, EAGLContext, GADBlockInvocation, GADGLSphericalShader, GLKView, NSString, NSThread;

@interface GADVideoPlayerGLView : UIView <GLKViewDelegate, GADVideoRendering>
{
    GLKView *_glView;	// 8 = 0x8
    NSThread *_renderThread;	// 16 = 0x10
    CADisplayLink *_displayLink;	// 24 = 0x18
    AVPlayerItemVideoOutput *_videoOutput;	// 32 = 0x20
    AVPlayer *_currentPlayer;	// 40 = 0x28
    double _nextDisplayTime;	// 48 = 0x30
    _Bool _hasDisplayedAtLeastOnePixelBuffer;	// 56 = 0x38
    double _displayStartTimeIntervalSince1970;	// 64 = 0x40
    double _videoOutputEmptyTimeIntervalThreshold;	// 72 = 0x48
    EAGLContext *_context;	// 80 = 0x50
    GADGLSphericalShader *_sphericalShader;	// 88 = 0x58
    _Bool _applicationActive;	// 96 = 0x60
    _Bool _isSubViewOfVisibleWindow;	// 97 = 0x61
    GADBlockInvocation *_renderThreadBlockInvocation;	// 104 = 0x68
    id <GADVideoPlayerGLViewDelegate> _delegate;	// 112 = 0x70
}

@property(nonatomic) __weak id <GADVideoPlayerGLViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100a0ff00
- (void)renderThreadApplicationDidEnterBackground;	// IMP=0x0000000100a0feb4
- (void)renderThreadApplicationWillEnterForeground;	// IMP=0x0000000100a0fe98
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000100a0fe64
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000100a0fe30
- (void)renderThreadWillMoveToWindow:(id)arg1;	// IMP=0x0000000100a0fe00
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100a0fdcc
- (void)renderThreadSetUpFailedWithErrorMessage:(id)arg1;	// IMP=0x0000000100a0fc68
- (void)renderThreadSetUpSucceeded;	// IMP=0x0000000100a0fba4
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;	// IMP=0x0000000100a0f974
- (void)resumeDisplayLink;	// IMP=0x0000000100a0f904
- (void)pauseDisplayLink;	// IMP=0x0000000100a0f8c4
- (void)unscheduleDisplayLink;	// IMP=0x0000000100a0f848
- (void)displayLinkCallback:(id)arg1;	// IMP=0x0000000100a0f790
- (void)layoutSubviews;	// IMP=0x0000000100a0f724
- (void)renderThreadResetVideoOutput;	// IMP=0x0000000100a0f578
- (void)renderThreadSetUp;	// IMP=0x0000000100a0f364
- (id)displayLinkCallbackBlockInvocation;	// IMP=0x0000000100a0f214
- (id)renderThreadBlockInvocationWithDisplayLink:(id)arg1;	// IMP=0x0000000100a0eff0
- (void)stopRenderThread;	// IMP=0x0000000100a0eeb8
- (void)startRenderThread;	// IMP=0x0000000100a0ecdc
- (void)renderThreadUserTouchMovedByVector:(id)arg1;	// IMP=0x0000000100a0ec84
- (void)handleUserTouchMovedByVector:(struct CGVector)arg1;	// IMP=0x0000000100a0ebf0
- (void)optimizeVideoForAdVisibility:(_Bool)arg1;	// IMP=0x0000000100a0ebec
- (void)disableVideoPlaybackOptimization;	// IMP=0x0000000100a0ebe8
- (void)resetVideoPlaybackOptimization;	// IMP=0x0000000100a0ebe4
- (void)enableVideoPlaybackOptimization;	// IMP=0x0000000100a0ebe0
- (void)setUpWithPlayer:(id)arg1;	// IMP=0x0000000100a0eb38
- (void)dealloc;	// IMP=0x0000000100a0ea9c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100a0e694

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
