//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADClearcutCommandExecuting.h"

@class JSContext, JSVirtualMachine, NSString;

@interface GADClearcutJSCoreCommandExecutor : NSObject <GADClearcutCommandExecuting>
{
    JSVirtualMachine *_virtualMachine;	// 8 = 0x8
    JSContext *_context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100951660
- (void)handleNetworkIOWithParameters:(id)arg1 successCallback:(id)arg2 failureCallback:(id)arg3;	// IMP=0x0000000100950d20
- (void)asynchronouslyExecuteCommands:(id)arg1;	// IMP=0x0000000100950c24
- (_Bool)isLoaded;	// IMP=0x0000000100950c1c
- (id)initWithScript:(id)arg1;	// IMP=0x00000001009507e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

