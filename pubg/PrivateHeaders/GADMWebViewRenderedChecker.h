//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIWebView;

@interface GADMWebViewRenderedChecker : NSObject
{
    UIWebView *_webView;	// 8 = 0x8
    id <GADMWebViewRenderedCheckerDelegate> _delegate;	// 16 = 0x10
}

@property(nonatomic) __weak id <GADMWebViewRenderedCheckerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;	// IMP=0x0000000100998c0c
- (double)percentOfImage:(id)arg1 ofColor:(id)arg2;	// IMP=0x0000000100998948
- (void)checkIsContentRenderedInWebView;	// IMP=0x0000000100998800
- (id)init;	// IMP=0x00000001009987e8
- (id)initWithWebView:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000100998740

@end

