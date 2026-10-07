# Project X README

Student: Evan Shum (927272694)

## Project Status
I forgot to upload a github repository even though I had already typed out what was provided in discussion.

## Known Issues
So far this code does not currently run the bin analysis, and valgrind isn't really present yet. Need to figure out how to implement iteration and maxsize. I didn't realize some of the commands were Linux 

## Code References
* [Different ways to initialize variables](https://stackoverflow.com/questions/22543875/different-ways-to-initialize-variables)
* [Some other link](https://stackoverflow.com)

## Generative AI Use
I used ChatGPT for Prompt 1

### Prompt 1
run_analysis: $(ANALYSIS_TARGET)

    $(ANALYSIS_TARGET) is this acceptable to run analysis with iterations and max size

### Response 1
Yes, that is a good starting structure, but by itself:

run_analysis: $(ANALYSIS_TARGET)
	$(ANALYSIS_TARGET)

only runs:

./bin/analysis

It does not specify the max size or iterations.

The important distinction is:

run_analysis: $(ANALYSIS_TARGET)

means:

"Before run_analysis, make sure bin/analysis has been built."

Then the indented command determines how you run it.

So conceptually you want:

run_analysis: $(ANALYSIS_TARGET)
	$(ANALYSIS_TARGET) <max-size> <iterations>

But don't put 256 1024 in there yet until you check how analysis.cpp expects its command-line arguments.

For example, if analysis.cpp has something like:

int main(int argc, char* argv[])
{
    int maxSize = atoi(argv[1]);
    int iterations = atoi(argv[2]);
    ...
}

then you would know that the command needs to look conceptually like:

./bin/analysis 256 1024

And because you need four runs, your eventual target needs to execute it four times:

256 / 1024
256 / 2048
256 / 4096
256 / 8192

So your current:

run_analysis: $(ANALYSIS_TARGET)
	$(ANALYSIS_TARGET)

is correct as a skeleton, but it isn't sufficient for the assignment yet.

If you paste the main() function from analysis.cpp, I can tell you exactly how to interpret the arguments without giving you the finished Makefile.

### Chagnes 1
I only needed the `for` loop part, and my string was named `bar` so I changed it to just:
```cpp
// AI Generated
for (char c : bar) {
```

### Prompt 2
My other prompt...

### Response 2
The other response...

### Changes 2
The other changes made...