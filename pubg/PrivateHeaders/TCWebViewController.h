//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"
#import "UIWebViewDelegate.h"

@class NSError, NSMutableData, NSString, UIActivityIndicatorView, UIWebView;

@interface TCWebViewController : UIViewController <UIWebViewDelegate, NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    int _nloadCount;	// 8 = 0x8
    UIWebView *_webview;	// 16 = 0x10
    NSString *_webTitle;	// 24 = 0x18
    NSString *_requestURLStr;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    id <TCWebViewControllerDelegate> _delegate;	// 48 = 0x30
    UIActivityIndicatorView *_activityIndicatorView;	// 56 = 0x38
    _Bool _finished;	// 64 = 0x40
    NSMutableData *_theData;	// 72 = 0x48
    unsigned long long _retryCount;	// 80 = 0x50
}

@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSMutableData *theData; // @synthesize theData=_theData;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) id <TCWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *requestURLStr; // @synthesize requestURLStr=_requestURLStr;
@property(retain, nonatomic) NSString *webTitle; // @synthesize webTitle=_webTitle;
@property(retain, nonatomic) UIWebView *webview; // @synthesize webview=_webview;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;	// IMP=0x0000000100b1eff8
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;	// IMP=0x0000000100b1ee88
- (void)webViewDidFinishLoad:(id)arg1;	// IMP=0x0000000100b1ee00
- (void)webViewDidStartLoad:(id)arg1;	// IMP=0x0000000100b1eddc
- (_Bool)shouldAutorotate;	// IMP=0x0000000100b1ed64
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000100b1ecec
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000100b1ec6c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100b1eba4
- (void)loadReqURL;	// IMP=0x0000000100b1e9cc
- (void)viewDidLoad;	// IMP=0x0000000100b1e7d0
- (void)doClose;	// IMP=0x0000000100b1e71c
- (void)stopLoad;	// IMP=0x0000000100b1e6f8
- (void)dealloc;	// IMP=0x0000000100b1e62c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100b1e5e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

