//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLSessionDataTask.h"

@interface NSURLSessionDataTask (_AFStateObserving)
+ (void)swizzleResumeAndSuspendMethodForClass:(Class)arg1;	// IMP=0x000000010060e624
+ (void)load;	// IMP=0x000000010060e434
- (void)af_suspend;	// IMP=0x000000010060e7d0
- (void)af_resume;	// IMP=0x000000010060e748
- (long long)state;	// IMP=0x000000010060e740
@end

