//
//  AppController.h
//  BBEncoder
//

#import <Cocoa/Cocoa.h>


@interface AppController : NSObject
{
	NSAttributedString *inputString;
	NSString *bbcode;
}

@property (readwrite, retain) NSAttributedString *inputString;
@property (readwrite, retain) NSString *bbcode;

@end
