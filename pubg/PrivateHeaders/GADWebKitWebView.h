//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADWebView.h"

#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"

@class NSString;

@interface GADWebKitWebView : GADWebView <WKNavigationDelegate, WKUIDelegate>
{
    _Bool _isMRAIDLoaded;	// 8 = 0x8
    _Bool _isViewportLoaded;	// 9 = 0x9
    _Bool _scalesPageToFit;	// 10 = 0xa
    id <GADWebKitWebViewMRAIDDelegate> _MRAIDDelegate;	// 16 = 0x10
}

+ (_Bool)isAvailable;	// IMP=0x0000000100a204f8
+ (void)initialize;	// IMP=0x0000000100a20458
@property(nonatomic) __weak id <GADWebKitWebViewMRAIDDelegate> MRAIDDelegate; // @synthesize MRAIDDelegate=_MRAIDDelegate;
- (void).cxx_destruct;	// IMP=0x0000000100a21a00
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100a218a0
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100a2177c
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100a21658
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;	// IMP=0x0000000100a214f0
- (void)webViewWebContentProcessDidTerminate:(id)arg1;	// IMP=0x0000000100a214a8
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000100a21498
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;	// IMP=0x0000000100a21488
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;	// IMP=0x0000000100a21454
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;	// IMP=0x0000000100a21448
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100a21290
- (_Bool)contentSizeUpdatesSynchronously;	// IMP=0x0000000100a21288
- (void)loadRequest:(id)arg1;	// IMP=0x0000000100a21214
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;	// IMP=0x0000000100a21184
- (void)loadUserScripts;	// IMP=0x0000000100a21150
- (void)loadViewport;	// IMP=0x0000000100a21050
- (void)loadMRAID;	// IMP=0x0000000100a20f14
- (void)addUserScript:(id)arg1 injectionTime:(long long)arg2;	// IMP=0x0000000100a20e20
- (void)evaluateJavaScriptFromString:(id)arg1;	// IMP=0x0000000100a20db0
- (void)dealloc;	// IMP=0x0000000100a20c48
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;	// IMP=0x0000000100a2050c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
