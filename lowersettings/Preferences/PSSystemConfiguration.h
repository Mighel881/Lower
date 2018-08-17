/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/Foundation.h>
#import "Preferences-Structs.h"


@interface PSSystemConfiguration : NSObject {
	SCPreferencesRef _prefs;
}
+(void)releaseSharedInstance;
+(id)sharedInstance;
-(void)setProtocolConfigurationValue:(id)value forKey:(CFStringRef)key protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;
-(id)protocolConfigurationValueForKey:(CFStringRef)key protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;
-(void)setProtocolConfiguration:(id)configuration protocolType:(CFStringRef)type serviceID:(CFStringRef)anId;
-(id)protocolConfiguration:(CFStringRef)configuration serviceID:(CFStringRef)anId;
-(void)setInterfaceConfigurationValue:(id)value forKey:(CFStringRef)key serviceID:(CFStringRef)anId;
-(id)interfaceConfigurationValueForKey:(CFStringRef)key serviceID:(CFStringRef)anId;
-(CFStringRef)getServiceIDForPDPContext:(unsigned)pdpcontext;
-(CFStringRef)voicemailServiceID;
-(CFStringRef)dataServiceID;
-(void)cleanupPrefs;
-(unsigned char)synchronizeForWriting:(BOOL)writing;
-(void)dealloc;
@end
