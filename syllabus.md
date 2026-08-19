# SYLLABUS — OA PREP

Owner: Raghu Raman B · M.Tech CSE, IIT Guwahati
Window: 6 Aug 2026 → 28 Nov 2026 · **OAs: 25 Sept – 28 Nov**
Language: C++. Every problem, every implementation, no exceptions.

---

## 0. ADMIN CALENDAR — CCD, IIT GUWAHATI

Miss one of these and the prep doesn't matter. Set calendar alarms today, not
reminders-to-self.

| Date | Item | Note |
|---|---|---|
| **8–12 Aug** | Placement fee ₹2500 · CCC Portal | **Hard gate.** Miss it and you are out of the process. |
| 15–20 Aug | CCD portal: login, data entry, photo | Falls during CHI. Alarm it. |
| 25–31 Aug | Placement ID card issue | — |
| **26–31 Aug** | **CV upload — 3 CVs + drive link for proofs** | Everything on the CV must be provable by this date. |
| 3–10 Sept | CV verification by CCD | Be responsive; flags come back here. |
| 7 Sept | CCD app opens for student updates | — |
| **15 Sept** | **CV flagging, rectification, LOCKING deadline** | Absolute final. Nothing changes after this. |
| 17 Sept → | Companies register on portal | **Max 50 profiles/student** — do not spray. |
| 6–10 Sept | Official Mock OA Series #1 | Free, realistic. Attend all. |
| 21–24 Sept | Official Mock OA Series #2 | Dress rehearsal. Attend all. |
| **25 Sept – 28 Nov** | **Online Assessments** | Windows: 7 PM–12:30 AM and 8 AM–12:30 AM |

**The night window is not a footnote.** A meaningful share of tests will run
between 7 PM and 12:30 AM. Solving at 11 PM is a different skill from solving
at 11 AM, and the gap is worth real marks. From September, move at least three
timed sessions a week into the 8 PM–midnight slot and hold a sleep schedule
that survives a midnight finish.

**Proof drive.** Every CV claim needs backing by 31 Aug. Request the Mphasis
internship certificate **this week** — that has external lead time and blocks
the upload. Also gather: pre-doctoral fellowship letter, CHI submission
confirmation, transcripts, the GitHub links.

**One question to ask CCD directly:** does the 15 Sept rectification window
permit *content* edits, or only fixing items CCD has flagged? If content edits
are allowed, the emulator gets two extra weeks to mature before locking. If
not, 31 Aug is the true freeze. Do not assume the generous reading.

---

## 1. THE SESSION CHAIN

Four prompts, used in a fixed order.

| Topic kind | Chain |
|---|---|
| **Data structure** | `04 build → 01 theory → 02 practice` (once per pattern) `→ 03 mock` |
| **Algorithmic pattern** | `01 theory → 02 practice` (once per pattern) `→ 03 mock` |

Build before theory, deliberately. Complexity derivations and invariants are
recitation before you've written the thing and interrogable after — nobody
actually knows why heapify is O(n) until they've written sift-down and watched
the leaf level cost nothing.

The split: **04 is what the structure *is*** (internals, operations, how it
breaks). 01 is what it's for (triggers, the topic's STL kit, when to reach for it). Recognition drilling lives in 02.

progress.md lives in the project files — every session reads it directly. You still paste the close block into it by hand at the end of each session; the model cannot write to project files. It is the only thing carrying state between chats.chats.

---

## 2. GRADE SCALE

Tiers are assigned by **frequency in OAs at the target companies**, not by
academic importance.

| Tier | Coverage | Problems (topic total) | Sessions | Rule |
|---|---|---|---|---|
| **S** | Every pattern, including the ugly ones | 28–35 | 2–3 days | Nothing skipped. Gets a second pass in Sept. |
| **A** | Top ~70% of patterns by frequency | 12–16 | 1–2 days | Rare patterns marked OPTIONAL, not dropped silently. |
| **B** | 2–3 core patterns only | 5–8 | ~0.5–1 day | Medium difficulty only. Skip easy. |
| **C** | Awareness only | 0–2 | none | Know the name and what it's for. Do not drill. |

**Depth** is a separate axis, used only by build sessions: `core` = the
operations a test needs · `full` = plus variants. Defaults: `full` for heap,
hash map, BIT, sorts. `core` for the rest.

### Budget math — read this, it doesn't close

```
Solving time available            ~130 h
  less DS build sessions (11 × 2h) −22 h
Effective solving time            ~108 h  ⇒  ~260 problems at 25 min each

S+A+B as tiered                   ~310 problems
```

**The plan overshoots by ~50 problems.** The build sessions are worth their
cost — they're the paper-test hedge and they carry the fundamentals-MCQ
sections at Qualcomm/Micron/Samsung/Goldman — but they are paid for out of
volume, and that has to come from somewhere.

**Declared cut line, decided now so it isn't decided under panic:** if behind
by 15 Sept, drop these four B topics entirely — Math & Number Theory, Matrix &
Simulation, BIT & Segment Tree, Shortest Paths beyond plain Dijkstra. Recovers
~24 problems and ~3 days. **Do not cut into A-tier to protect B-tier.**

---

## 3. TOPIC LIST

`04?` marks topics that open with a build session.

### S-TIER — 5 topics · ~150 problems

| Topic | 04? | Why S |
|---|---|---|
| Arrays & Hashing | ✅ hash map (chaining + open addressing) | Base layer of nearly every problem. Hash map is the default first tool. |
| Two Pointers & Sliding Window | — | Highest hit-rate pattern family in campus OAs. |
| Binary Search (incl. on the answer) | — | "Binary search on the answer" is the most common disguised-hard pattern in modern OAs. |
| Graphs — BFS / DFS / Topo Sort | ✅ adjacency list *(light, `core`)* | Amazon, Microsoft, Oracle lean on these. Backbone of long-form tests. |
| Dynamic Programming | — | Where most candidates lose. Needs two passes. 1D → knapsack → LIS → grid → string. |

### A-TIER — 8 topics · ~112 problems

| Topic | 04? | Why A |
|---|---|---|
| Sorting & Greedy | ✅ **sorts** (merge, quick, counting) `full` | Custom comparators, exchange-argument greedies. A paper test will ask you to write a sort. |
| Prefix Sums & Difference Arrays | — | Cheap, converts many O(n²) traps into O(n). |
| Stacks & Monotonic Stack | ✅ array stack + deque | Next-greater family; expression parsing; monotonic deque. |
| Heaps & Top-K | ✅ binary min-heap `full` | k-th smallest, merge-k, streaming median. |
| Recursion & Backtracking | — | Subsets/permutations/combination sum/N-Queens/word search. Heavy in long-form tests. |
| Trees & BST | ✅ BST + iterative traversals | Traversals, LCA-lite, path sums. Feeds directly into Graphs. |
| Strings | — | Parsing, anagram/hashing, palindromes. Under-practised by most candidates. |
| DSU | ✅ DSU | Short, high-leverage, appears far more often than its reputation suggests. |

### B-TIER — 8 topics · ~48 problems

| Topic | 04? | Scope |
|---|---|---|
| Linked Lists | ✅ singly + doubly + **LRU cache** | Reverse, cycle detect, merge, reorder. **Filler topic** — odd evenings, never a session slot. |
| Shortest Paths | ✅ Dijkstra *(light)* | Dijkstra with a heap. Bellman-Ford awareness only. |
| Intervals | — | Merge, insert, min-rooms, sweep line. |
| Tries | ✅ trie | Insert/search/prefix, word search II. |
| Bit Manipulation | — | Masks, XOR tricks, subset enumeration, bitmask DP entry. |
| Math & Number Theory | — | GCD, sieve, modular arithmetic, fast power, basic combinatorics. |
| Matrix & Simulation | — | Rotation, spiral, flood fill, grid simulation. Common in long-form. |
| BIT & Segment Tree | ✅ BIT `full` + segment tree | Point update + range query only. **No lazy propagation.** BIT first — shorter, faster, harder to get wrong. |

### C-TIER — awareness only, no sessions

KMP / Z-algorithm · Manacher · Floyd–Warshall · Sparse table · Suffix
array/automaton · Network flow & bipartite matching · Heavy-light
decomposition · Persistent segment trees · Treaps · Policy-based data
structures.

Know the name and the one-line "this is what it's for." None of these appear
in campus OAs. If one shows up, that problem was lost regardless.

---

## 4. TIMELINE

### Phase 1 — 4–19 Aug · 3h/day · main focus is elsewhere

Low-attention-tolerant topics — patterns learnable while distracted.

| Dates | Session | Tier |
|---|---|---|
| Aug 4 | `04` hash map `full` | — |
| Aug 4–6 | Arrays & Hashing | S |
| Aug 7–9 | Two Pointers & Sliding Window | S |
| Aug 10–12 | Binary Search (incl. on the answer) | S |
| Aug 13–14 | Prefix Sums & Difference Arrays | A |
| Aug 15 | `04` **sorts** `full` (merge, quick, counting) | — |
| Aug 15–16 | Sorting & Greedy | A |
| Aug 17–18 | Strings | A |
| Aug 19 | **MOCK 1** `standard` + burn queue clear | — |

### Phase 2 — 20–31 Aug · full days, minus project weekends and the CV window

| Dates | Session | Tier |
|---|---|---|
| Aug 20 | Draft all 3 CVs from one master `.tex`. Burn queue only. | — |
| Aug 21 | `04` array stack + deque → Stacks & Monotonic Stack | A |
| **Aug 22–24** | **PROTECTED — project work.** 1 timed problem/day, nothing else. | — |
| Aug 25 | `04` binary min-heap `full` → Heaps & Top-K. Assemble `bare.h`. | A |
| Aug 26 | Recursion & Backtracking (day 1). **Evening: assemble proof drive.** | A |
| Aug 27 | Recursion & Backtracking (day 2) | A |
| Aug 28 | `04` BST + iterative traversals → Trees & BST (day 1) | A |
| **Aug 29–30** | **PROTECTED — project work.** Final push: README, screenshot, push to GitHub. | — |
| **Aug 31** | **CV UPLOAD — 3 CVs + proof drive link.** Light DSA only. | — |

The emulator repo must be linkable on 31 Aug, because the CV claims it and
CCD verifies claims from 3 Sept. A project you cannot link is a bullet that
gets flagged.

### Phase 3 — 1–24 Sept · full days

| Dates | Session | Tier |
|---|---|---|
| Sept 1 | Trees & BST (day 2) | A |
| Sept 2–5 | `04` adjacency list *(light)* → Graphs: BFS/DFS/topo sort | S |
| **Sept 6–10** | **OFFICIAL MOCK OA SERIES #1.** Attend every one. Each is a diagnostic — failures go into the burn queue the same night. Around them: `04` DSU → DSU, and `04` Dijkstra *(light)* → Shortest Paths. | — |
| Sept 11–17 | **Dynamic Programming** — 1D → knapsack → LIS → grid → string. Longest block in the plan; it earns it. | S |
| Sept 15 | *(admin)* **CV LOCK deadline.** Ten minutes, not a day. | — |
| Sept 18–19 | B-tier sweep: `04` trie → Tries · Bit Manipulation · Intervals · Matrix & Simulation. **Apply the cut line here if behind** — drop Math & Number Theory and BIT/Segment Tree. | B |
| Sept 20 | **SECOND PASS** — Graphs + DP. Burn-queue redos only, no new problems. | — |
| **Sept 21–24** | **OFFICIAL MOCK OA SERIES #2** + past papers for whoever is first in the queue. Full cold-retype sweep of §5. | — |

**You will hit Mock Series #1 without DP.** That is by design, not a failure —
it runs 6–10 Sept and DP starts the 11th. Expect the DP problems to hurt, note
which ones, and let that shape the block that follows. Do not panic-reorder the
schedule on the back of a bad mock.

The two official series replace the synthetic mocks that were in this plan.
They're free, realistic, and proctored, which is strictly better than anything
prompt `03` can simulate. Keep `03` for the gaps — one on 19 Aug, then ad hoc
during the season.

Linked Lists is deliberately not on this calendar. Filler — its build session
plus LRU cache and ~10 problems, squeezed into odd evenings across Phases 1–2.

### Phase 4 — 25 Sept → 28 Nov · test season · nine weeks

Mode change. No new topics.

- Before each company: search `[Company] OA 2025 / 2026` on LeetCode Discuss.
  Campus sets recycle heavily. This is ground truth — never rely on a recalled
  question list, from any source.
- After each test: whatever you fumbled goes into the burn queue that night
  and gets drilled the next day. Every test is a free diagnostic.
- 2–3 new problems/day is enough. The tests themselves supply the volume.
- Daily Anki review, non-negotiable.
- One genuinely off day per week. The plan that breaks is the one with no
  slack.

Nine weeks is longer than originally planned for, and that favours you.
Companies late in the season meet a much stronger candidate than the ones in
week one. Budget accordingly: the first two or three tests are expected to go
badly, and that is the shape of the season, not a signal to change strategy.

**Still to confirm:** company sequencing within the 25 Sept – 28 Nov window.
Portal registration opens 17 Sept, so the list firms up then — but ask last
year's batch now. If the DSA-heavy names cluster in the first fortnight, pull
DP earlier and push the B-tier sweep into October, where there is room.

---

## 5. COLD RETYPE — PAPER-TEST INSURANCE

Two separate gates, deliberately. The **band** from a build session grades the
first write, untimed — that's a learning write. The **cold retype** grades
speed from memory: no STL, no reference, stopwatch running.

Knowing a BIT isn't the skill. Reproducing it in 4 minutes cold is.

| Structure | Target | | Structure | Target |
|---|---|---|---|---|
| Array-backed stack | 3 min | | Doubly linked list | 7 min |
| DSU | 3 min | | Deque | 8 min |
| Counting sort | 4 min | | Binary min-heap | 8 min |
| Fenwick tree (BIT) | 4 min | | Hash map (chaining) | 10 min |
| Mergesort | 5 min | | Hash map (open addressing) | 10 min |
| Singly linked list | 5 min | | Segment tree | 10 min |
| Quicksort | 6 min | | BST (two-child delete) | 12 min |
| Circular queue | 6 min | | LRU cache | 12 min |
| Trie | 6 min | | | |
| Iterative traversals | 6 min | | | |
| Dijkstra | 6 min | | | |

**Protocol.** Each structure is written once in its build session and
evaluated there. It then enters the burn queue at **+2 days** and **+7 days**
for a cold retype against the clock. On 20 Sept, retype the whole table in one
sitting; anything over target goes into October's rotation.

**`bare.h`** — after the heap build (~25 Aug), assemble a single no-STL header:
`MyStack`, `MyQueue`, `MyHeap`, `MyHashMap`, plus BIT and segment tree. Own
names — never shadow STL identifiers, it produces ambiguity errors under
`using namespace std;` and buys nothing. Spend one afternoon solving 4–5
problems using only that header. Sufficient. More is time taken from volume.

Everywhere else: **use STL.** Faster to type, fewer bug surfaces, and that is a
real scoring advantage on the ~90% of tests that permit it.

---

## 6. STANDING RULES

1. Every problem timed. Exceeded the box ⇒ auto-burn, regardless of verdict.
   An accepted solution that took 40 minutes is a failure.
2. Timer expires ⇒ read the editorial, log trigger→pattern, move on. Do not
   grind.
3. Mistake log entry for every failure: **trigger → pattern**, one line.
4. progress.md updated by hand from the close block at the end of every session. Sessions read it from the project files. Skip the update and every session after it reads a stale file — worse than no file, because it looks current.
5. Anki reviewed daily. Hard cap ~250 cards across both decks.
6. Weekly rated contest — same practice, better pressure simulation, and the
   rating is the one verifiable number available for the CV.
7. Optimal not visible in ~5 minutes ⇒ write and submit the brute force first.
   Partial credit is real credit.
8. Constraints → complexity budget, read before writing anything.
   `n ≤ 10⁵` ⇒ O(n log n) · `n ≤ 10³` ⇒ O(n²) fine · `n ≤ 20` ⇒ exponential
   intended.
9. Never trust a recalled question list — yours or a model's. Verify numbers
   against titles; verify company sets against LeetCode Discuss.

---

## 7. DAILY SCHEDULE

Three shapes, one per phase. The key structural rule underneath all of them:

> **DSA is drill work — it tolerates fragmentation. MTP is deep work — it does
> not.** Do not slice the thesis into daily one-hour scraps; research has a
> high context-reload cost and an hour a day mostly pays that cost and buys
> nothing. Give it contiguous blocks instead.

### Phase A — 6–19 Aug · CHI is the main event

DSA sits *between* CHI blocks deliberately. It's the switch that makes the
drudgery survivable, which only works if it's genuinely a different mode.

| Time | Block |
|---|---|
| 08:00 | Wake |
| 08:30–09:00 | Anki review |
| 09:00–13:00 | **CHI** — data collection / analysis (the menial bulk) |
| 13:00–14:00 | Lunch, away from the desk |
| 14:00–17:00 | **DSA — 3h.** Full session: theory, build, or one ladder |
| 17:00–18:00 | Break / exercise |
| 18:00–21:00 | **CHI** — draft writing |
| 21:00–21:30 | `close` block → progress.md · Anki additions |
| 21:30–23:00 | Buffer, CHI overflow, wind-down |
| 23:30 | Sleep — 8.5h |

MTP: **paused**, except advisor meetings. It shares a research direction with
CHI, so the pause is cheaper than it looks. Say this to your advisor now
rather than going quiet — a two-line email in August prevents an awkward
conversation in September.

Admin: fee 8–12 Aug · portal entry 15–20 Aug.

### Phase B — 20 Aug – 24 Sept · full prep

| Time | Block |
|---|---|
| 08:00 | Wake |
| 08:30–09:00 | Anki review — first thing, best retention |
| 09:00–12:00 | **DSA block 1** — theory / build session |
| 12:00–13:00 | Lunch |
| 13:00–16:30 | **DSA block 2** — ladder |
| 16:30–17:30 | Break / exercise — **not optional**, this is the block that keeps the other six working |
| 17:30–19:00 | **MTP** *(Mon/Wed/Fri)* or DSA overflow *(Tue/Thu)* |
| 19:00–20:00 | Dinner |
| 20:00–22:00 | **Evening timed session — 3×/week.** Night-window adaptation starts here, five weeks before it matters |
| 22:00–22:30 | `close` block · burn queue update |
| 22:30–00:00 | Wind-down |
| 00:30 | Sleep — 7.5h |

**MTP gets one protected half-day per week** — Saturday morning, 09:00–13:00 —
*in addition* to the Mon/Wed/Fri slots. That contiguous block is where actual
thesis progress happens; the weekday slots are for keeping threads warm and
not losing state.

**From ~10 Sept, begin the phase shift.** Move wake and sleep 30 min later
every two days until you land on the Phase C timing. Arriving pre-adapted on
25 Sept is worth more than an extra week of problems.

### Phase C — 25 Sept – 28 Nov · test season · night-shifted

| Time | Block |
|---|---|
| 10:00 | Wake — **bright light immediately**, 10–15 min outdoors if possible |
| 10:30–11:00 | Anki review |
| 11:00–13:30 | **MTP** — mornings are now genuinely free; this is the best thesis window of the whole year |
| 13:30–14:30 | Lunch |
| 14:30–17:30 | **DSA** — past papers for the next company in queue · burn queue · weak patterns from the last test |
| 17:30–18:15 | Light dinner — protein-forward, **not heavy.** A big meal at 18:00 buys you a postprandial dip at 20:00 |
| 18:15–19:00 | **Warm-up: one easy problem, timed.** Never cold-start a test |
| 19:00–00:30 | **TEST WINDOW.** Real OA, or a `03` mock in the same slot if none scheduled |
| 00:30–01:30 | Decompress. Failures → burn queue *tonight*, while it's fresh |
| 02:00 | Sleep — 8h |

MTP recovers substantially here — DSA volume drops to 2–3 problems a day since
the tests themselves supply the load. Use it.

### Standing, all phases

- **One full off day per week.** Not a light day. The plan that fails is the
  one with no slack in it.
- Exercise block is load-bearing, not filler.
- Eat with people at least once a day. A night-shifted schedule isolates you
  fast, and four months is long enough for that to matter.

---

## 8. THE NIGHT WINDOW

The 7 PM–12:30 AM slot is the single most underrated detail in the entire
calendar. Tactics that work:

**Light.** Bright light 18:00–20:00 holds the delayed phase and kills the
evening dip. Dim, warm light after the window closes so sleep onset at 02:00
isn't a fight. Bright light on waking anchors the whole rhythm — this one does
the most work.

**Caffeine, timed not maximised.** Half-life is ~5–6h. For a 19:00 start and a
02:00 bedtime, one dose at **17:30–18:00** is the useful one. Nothing after
20:00 — it will still be in your system at bedtime and it degrades sleep depth
even when you fall asleep fine. Skip the second cup; it buys alertness now and
costs tomorrow.

**The warm-up problem is not optional.** Cold-starting a timed test is worth
several minutes of fumbling on the first problem, which is exactly where
triage decisions get made.

**Consistency beats optimisation.** Same wake time every day, including off
days. A schedule that swings by three hours on weekends re-breaks the
adaptation every Monday.

**Practise in the slot, not just the format.** Three evening sessions a week
through September means 25 Sept isn't the first time you've solved hard
problems at 22:00.
