//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKWebDialogViewDelegate.h"

@class FBSDKWebDialogView, NSDictionary, NSString, UIView;

@interface FBSDKWebDialog : NSObject <FBSDKWebDialogViewDelegate>
{
    UIView *_backgroundView;	// 8 = 0x8
    FBSDKWebDialogView *_dialogView;	// 16 = 0x10
    _Bool _deferVisibility;	// 24 = 0x18
    id <FBSDKWebDialogDelegate> _delegate;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSDictionary *_parameters;	// 48 = 0x30
}

+ (id)showWithName:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;	// IMP=0x00000001006cd6dc
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <FBSDKWebDialogDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool deferVisibility; // @synthesize deferVisibility=_deferVisibility;
- (void).cxx_destruct;	// IMP=0x00000001006cee9c
- (void)_updateViewsWithScale:(double)arg1 alpha:(double)arg2 animationDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001006cea6c
- (struct CGRect)_applicationFrameForOrientation;	// IMP=0x00000001006ce92c
- (struct CGAffineTransform)_transformForOrientation;	// IMP=0x00000001006ce854
- (_Bool)_showWebView;	// IMP=0x00000001006ce544
- (id)_generateURL:(id *)arg1;	// IMP=0x00000001006ce2ac
- (void)_failWithError:(id)arg1;	// IMP=0x00000001006ce164
- (void)_dismissAnimated:(_Bool)arg1;	// IMP=0x00000001006cde90
- (void)_completeWithResults:(id)arg1;	// IMP=0x00000001006cde00
- (void)_cancel;	// IMP=0x00000001006cdd8c
- (void)_removeObservers;	// IMP=0x00000001006cdd2c
- (void)_deviceOrientationDidChangeNotification:(id)arg1;	// IMP=0x00000001006cdbe0
- (void)_addObservers;	// IMP=0x00000001006cdb78
- (void)webDialogViewDidFinishLoad:(id)arg1;	// IMP=0x00000001006cdaa8
- (void)webDialogViewDidCancel:(id)arg1;	// IMP=0x00000001006cda9c
- (void)webDialogView:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000001006cda8c
- (void)webDialogView:(id)arg1 didCompleteWithResults:(id)arg2;	// IMP=0x00000001006cda7c
- (_Bool)show;	// IMP=0x00000001006cd87c
- (void)dealloc;	// IMP=0x00000001006cd7bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

